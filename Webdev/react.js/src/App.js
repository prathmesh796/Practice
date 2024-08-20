import logo from './logo.svg';
import { useState } from 'react';
import './App.css';

import Navbar from './components/navbar';

function App() {
  const [value, setValue] = useState(0)

  return (
    <div className="App">
      <Navbar/>
      <dir className="value">
        <h4>{value}</h4>
        <button onClick={()=>{setValue(value + 1)}}>click me</button>
      </dir>
    </div>
  );
}

export default App;
