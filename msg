cd src
mkdir utils
touch utils/mensagem.js

// src/utils/mensagem.js

function obterMensagem() {
  return "Olá! Esta é a mensagem da Sabrina.";
}

export default obterMensagem;

// src/App.js
import React from 'react';
import obterMensagem from './utils/mensagem';

function App() {
  const mensagem = obterMensagem();

  return (
    <div>
      <h1>{mensagem}</h1>
    </div>
  );
}

export default App;
