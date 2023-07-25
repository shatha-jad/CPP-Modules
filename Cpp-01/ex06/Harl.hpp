/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:13:59 by sjadalla          #+#    #+#             */
/*   Updated: 2023/03/26 20:15:36 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
private:
   void debug( void );
   void info( void );
   void warning( void );
   void error( void );
public:
    Harl();
    ~Harl();
    void complain( std::string level );
};

#endif