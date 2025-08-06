#!/bin/bash
echo "🚀 Starting JUSTYTA HTML Website..."
echo "📂 Current directory: $(pwd)"
echo "🌐 Starting server on http://localhost:8080"
echo "📱 Access from mobile: http://$(hostname -I | awk '{print $1}' 2>/dev/null || ipconfig getifaddr en0 2>/dev/null || echo 'YOUR_IP'):8080"
echo ""
echo "Press Ctrl+C to stop the server"
echo ""
python3 -m http.server 8080
