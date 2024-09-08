import Image from "next/image";
import Script from "next/script";

export default function Home() {
  return (
    <>
      <div>
        hi, this is my first next.js app
        <Script>{`alert('scrpts')`}</Script>
        <div className="container">
          <Image className='mx-auto' src='https://media-cdn.tripadvisor.com/media/photo-s/0c/bb/a3/97/predator-ride-in-the.jpg' width={100} height={100}/>
        </div>
      </div>
    </>
  );
}
