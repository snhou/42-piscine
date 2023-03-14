# Exercise 06 : gitignore

{% embed url="https://stackoverflow.com/questions/56841658/write-a-shell-script-that-will-return-the-list-of-files-skipped-by-your-reposito" %}

```
find . -type f  | git check-ignore --stdin
```

```
git ls-files -i -o -exclude -standard
```
