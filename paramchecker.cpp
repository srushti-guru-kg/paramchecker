bool BpmOK(float bpm)
{
  if(bpm < 70 || bpm >150)
  {
    return false;
  }
  else
  {
    return true;
  }
}
bool Spo2OK(float spo2)
{
  if(sp02 < 80)
  {
    return false;
  }
  else
  {
    return true;
  }
}
bool ResprateOK(float respRate)
{
  if(respRate < 30 || respRate > 60)
  {
    return false;
  }
  else
  {
    return true;
  }
}


bool vitalsAreOk(float bpm, float spo2, float respRate)
{ 
  if(BpmOK(bpm) && Spo2OK(spo2) && RespRateOK(respRate))
  {
    return true;
  }
  else
  {
    retrun false;
  }
}
