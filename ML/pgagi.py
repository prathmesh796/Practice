import google.generativeai as genai
import os

#GOOGLE_API_KEY=userdata.get('AIzaSyCGXDXXEIsNl66VRhgBVTAplJjAb_UaCU4')

genai.configure(api_key='AIzaSyCGXDXXEIsNl66VRhgBVTAplJjAb_UaCU4')

for m in genai.list_models():
  if 'generateContent' in m.supported_generation_methods:
    print(m.name)

model = genai.GenerativeModel('gemini-1.5-flash')