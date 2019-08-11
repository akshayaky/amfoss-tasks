extern crate regex;
use regex::Regex;

fn main() {

    let re = Regex::new(r"^[[:words:][^@\s]]{1,64}@[A-Za-z0-9[^@\s]]+\.[a-zA-Z.-]+$").unwrap();
    
    let  mut email = "edward675@gmail.com";
    
    if re.is_match(&mut email) == true
    {
        println!("Email Address is Valid.",);
    }
       
    else
    {
        println!("Email Address is invalid.")
    }
    
}