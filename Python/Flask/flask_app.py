# ref - https://flask.palletsprojects.com/en/3.0.x/

from flask import Flask

app = Flask(__name__)

@app.route("/")
def hello_world():
    return "<p>Hello, World!</p>"

app.run(debug=True)