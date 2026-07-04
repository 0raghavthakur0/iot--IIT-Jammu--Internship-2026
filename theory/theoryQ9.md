# Q9 – Difference between git clone, git fetch and git pull

## 1. git clone

### Definition
`git clone` is used to copy an entire remote GitHub repository to your local computer.

### When is it used?
It is used only the first time you download a repository.

### Command

```bash
git clone https://github.com/username/iot-summer-school-2026.git
```

### Example
If your friend shares a GitHub repository, you use `git clone` to download it to your computer.

---

## 2. git fetch

### Definition
`git fetch` downloads the latest changes from the remote repository but does **not** merge them into your current branch.

### When is it used?
When you want to check for new updates without changing your local files.

### Command

```bash
git fetch origin
```

### Example
A teammate pushes new code to GitHub. You use `git fetch` to see the updates before merging them.

---

## 3. git pull

### Definition
`git pull` downloads the latest changes from the remote repository and automatically merges them into your current branch.

### When is it used?
When you want your local repository to be updated immediately.

### Command

```bash
git pull origin main
```

### Example
Before starting work each day, you use `git pull` to get the latest code from GitHub.

---

# Comparison Table

| Command | Downloads Changes | Merges Changes | First Time Use |
|----------|-------------------|----------------|----------------|
| git clone | Yes | Yes | Yes |
| git fetch | Yes | No | No |
| git pull | Yes | Yes | No |

---

# Conclusion

- `git clone` is used to copy a repository for the first time.
- `git fetch` downloads changes without merging them.
- `git pull` downloads and merges the latest changes into the current branch.
