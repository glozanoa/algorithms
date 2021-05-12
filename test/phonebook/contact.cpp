/*
 * Contact class implementation - Customized data structure
 *
 * Maintainer: glozanoa <glozanoa@uni.pe>
 */

#include "contact.hpp"

Contact::Contact(vector<string> data)
{
  first_name = data[0];
  last_name = data[1];
  company = data[2];
  address = data[3];
  city = data[4];
  province = data[5];
  postal = data[6];
  string phone1 = data[7];
  string phone2 = data[8];
  phones = {phone1, phone2};
  email = data[9];
  web = data[10];
}


bool Contact::operator<(Contact contact) // sort alphabetically by full_name
{
  string full_name_contact = contact.get_full_name();
  string full_name = this->get_full_name();
  return lexicographical_compare(full_name.begin(), full_name.end(),
                                 full_name_contact.begin(), full_name_contact.end());
}

ostream& Contact::operator<<(ostream& out, Contact contact)
  {
    out << "Contact(Name: " << contact.get_fullname();

    out << ", Phones: "
    for(string phone : contact.get_phones())
      {
        out << phone << ", ";
      }

    out << "City: " << contact.get_city()
        << ", Address: " << contact.get_address() <<  ")";

    return out;
  }
