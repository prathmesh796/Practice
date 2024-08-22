import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './App.jsx'
import './index.css'

createRoot(document.getElementById('root')).render(
  <StrictMode> 
    {/* //this tags runs our app twice whenever we run the server. First to check if the app is working properly or not. And second to actually show the running app */}
    <App />
  </StrictMode>,
)
