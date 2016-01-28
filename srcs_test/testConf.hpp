// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   testConf.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/01/27 19:34:12 by ngoguey           #+#    #+#             //
//   Updated: 2016/01/28 13:36:16 by ngoguey          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TESTCONF_HPP
# define TESTCONF_HPP

# include <regex>
# include "Controller.hpp"

#define RUN_ABSTRACT_VM							\
	Controller()(1, nullptr)

#define UNDERFLOWED(OUTPUT)										\
	std::regex_search((OUTPUT), std::regex("underflow_error"))

#define OVERFLOWED(OUTPUT)										\
	std::regex_search((OUTPUT), std::regex("overflow_error"))


// #define PRINT_OUTPUT(STREAM)							\
// 	BOOST_TEST_MESSAGE(std::string("Output:") + CCYA	\
// 					   + killTrailingEOL((STREAM).str()) + CEND)

#define PRINT_OUTPUT(STREAM)

#endif /* ****************************************************** TESTCONF_HPP */