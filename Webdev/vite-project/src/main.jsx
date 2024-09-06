import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './App.jsx'
import './index.css'
import Login from './components/Login.jsx'

import { store } from './redux/store.js'
import { Provider } from 'react-redux'

import { createBrowserRouter, RouterProvider } from 'react-router-dom'

const router = createBrowserRouter([
  {
    path: "/",
    element: <App />
  },
  {
    path: "/login",
    element: <Login/>
  }
])

createRoot(document.getElementById('root')).render(
  <StrictMode> 
    {/* //this tags runs our app twice whenever we run the server. First to check if the app is working properly or not. And second to actually show the running app */}
    <Provider store={store}>
      <RouterProvider router={router}/>
    </Provider>

  </StrictMode>,
)
