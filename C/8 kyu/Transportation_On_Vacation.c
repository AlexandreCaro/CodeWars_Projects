/* d - the days to rent */
unsigned rental_car_cost(unsigned d)
{
    if(d >= 7){
      return d*40 - 50;
    } else if(d >= 3){
      return d*40 - 20;
    } else {
      return d*40;
    }
}

/* Other solution*/

/* d - the days to rent */
unsigned rental_car_cost(unsigned d)
{
    return (d >= 7) ? d*40 - 50 : (d >= 3) ? d*40-20 : d * 40;
}