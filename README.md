# Minimal Static Website Starter

A lightweight, responsive starter with plain HTML, CSS, and JS. No build tools required.

## Quick start

- Open `index.html` directly in a browser, or serve it locally for proper routing and CORS behavior:

```bash
# Option 1: Python (built-in on most systems)
python3 -m http.server 5173 --bind 127.0.0.1
# then visit: http://127.0.0.1:5173/

# Option 2: Node (no install, one-off)
npx --yes serve . -l 5173
# then visit: http://localhost:5173/
```

## Structure

- `index.html`: homepage with hero, features, and contact form
- `styles.css`: variables, layout, responsive styles
- `script.js`: mobile nav toggle and form handling

## Customize

- Update colors in `:root` inside `styles.css`
- Edit copy and sections in `index.html`
- Extend behavior in `script.js`

## Deploy

- GitHub Pages: push this folder to a repo, then enable Pages (root)
- Netlify/Vercel: drag-and-drop or connect repo, set root to project root

## License

MIT
