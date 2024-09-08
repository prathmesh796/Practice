/** @type {import('next').NextConfig} */
const nextConfig = {
    images: {
        remotePatterns: [
          {
            protocol: 'https',
            hostname: 'media-cdn.tripadvisor.com',
            port: '',
          },
        ],
      },
};

export default nextConfig;
