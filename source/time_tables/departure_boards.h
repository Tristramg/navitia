/* Copyright © 2001-2014, Canal TP and/or its affiliates. All rights reserved.
  
This file is part of Navitia,
    the software to build cool stuff with public transport.
 
Hope you'll enjoy and contribute to this project,
    powered by Canal TP (www.canaltp.fr).
Help us simplify mobility and open public transport:
    a non ending quest to the responsive locomotion way of traveling!
  
LICENCE: This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
   
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Affero General Public License for more details.
   
You should have received a copy of the GNU Affero General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
  
Stay tuned using
twitter @navitia 
IRC #navitia on freenode
https://groups.google.com/d/forum/navitia
www.navitia.io
*/

#pragma once
#include "type/pb_converter.h"
#include "routing/routing.h"
#include "get_stop_times.h"


namespace navitia { namespace timetables {
typedef std::vector<DateTime> vector_datetime;
typedef std::pair<uint32_t, uint32_t> stop_point_line;
typedef std::vector<datetime_stop_time> vector_dt_st;

pbnavitia::Response departure_board(const std::string &filter,
                                    boost::optional<const std::string> calendar_id,
                                    const std::vector<std::string>& forbidden_uris,
                                    const std::string &date,
                                    uint32_t duration,
                                    uint32_t depth, int32_t max_date_times,
                                    int interface_version,
                                    int count, int start_page, const type::Data &data, bool disruption_active,
                                    bool show_codes=false);
}

}
