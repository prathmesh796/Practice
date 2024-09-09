"use client"
import Image from "next/image";
import Script from "next/script";

export default function Home() {
  const handlePost = async() => {
    let data = {
      'name': 'prathmesh',
      'age': 20,
      'gender': 'male'
    }
    let a = await fetch('/api/add', {
      method: "POST",
      body: JSON.stringify(data),
      headers: {
        "Content-Type": "application/json",
      },
    })
    let res = await a.json()
    console.log(res)
  }

  return (
    <>
      <div>
        hi, this is my first next.js app
        <Script>{`alert('scrpts')`}</Script>
        <div className="container">
          <Image className='mx-auto' src='https://media-cdn.tripadvisor.com/media/photo-s/0c/bb/a3/97/predator-ride-in-the.jpg' width={100} height={100}/>
        </div>
      </div>

      <div>
        <h3>post requests</h3>
        <button onClick={handlePost}>post</button>
      </div>
    </>
  );
}
