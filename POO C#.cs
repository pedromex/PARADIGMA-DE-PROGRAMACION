//Mex Ucan Pedro Abraham Programacion POO
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
 
namespace ConsoleApplication1
{
 
    public class Cliente
    {
        public int IdCliente { get; private set; }
        public string Nombre { get; set; }
        public Cliente() {
          Nombre ="Vacio";
          IdCliente = 33;
 
        }
    }
 
    class Program
    {
        static void Main(string[] args)
        {
         Cliente c1 = new Cliente();
         Console.WriteLine(c1.Nombre);
         Console.WriteLine(c1.IdCliente.ToString());
         c1.Nombre = "Pepe";
         //c1.IdCliente = 66; daría error de compilación porque es private.
 
         Console.WriteLine(c1.Nombre);
         Console.ReadLine();
        }
    }
}