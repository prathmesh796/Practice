export const metadata = {
    title: "Admin page",
    description: "Generated by create next app",
};

export default function RootLayout({ children }) {
    return (
        <>
            <span>this is admin</span>
            {children}
        </>

    );
}