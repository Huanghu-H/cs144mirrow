#include "byte_stream.hh"
<<<<<<< HEAD
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

ByteStream::ByteStream( uint64_t capacity ) : total_r_(0), total_w_(0), ended_(false), capacity_( capacity ) {}

bool Writer::is_closed() const
{
  return ended_;
}

void Writer::push(string data)
{
  uint64_t len = data.length();

  if(capacity_ - buf_.size() < data.length())
    len = capacity_ - buf_.size();

  for(uint64_t i=0; i<len; i++)
    buf_ += data[i];

  total_w_ += len;
=======

using namespace std;

ByteStream::ByteStream( uint64_t capacity ) : capacity_( capacity ) {}

bool Writer::is_closed() const
{
  // Your code here.
  return {};
}

void Writer::push( string data )
{
  // Your code here.
  (void)data;
  return;
>>>>>>> upstream/check1-startercode
}

void Writer::close()
{
<<<<<<< HEAD
  ended_ = true; 
=======
  // Your code here.
>>>>>>> upstream/check1-startercode
}

uint64_t Writer::available_capacity() const
{
<<<<<<< HEAD
  return capacity_ - buf_.size();
=======
  // Your code here.
  return {};
>>>>>>> upstream/check1-startercode
}

uint64_t Writer::bytes_pushed() const
{
<<<<<<< HEAD
  return total_w_;
=======
  // Your code here.
  return {};
>>>>>>> upstream/check1-startercode
}

bool Reader::is_finished() const
{
<<<<<<< HEAD
  return ended_ && buf_.empty();
=======
  // Your code here.
  return {};
>>>>>>> upstream/check1-startercode
}

uint64_t Reader::bytes_popped() const
{
<<<<<<< HEAD
  return total_r_;
=======
  // Your code here.
  return {};
>>>>>>> upstream/check1-startercode
}

string_view Reader::peek() const
{
<<<<<<< HEAD
  // if(buf_.size()==0)
  //   return "";
  // else

  string_view str_v(buf_);

  return str_v;

  // if(buf_.front()=='c') // 给他测试用例全扒了能过3
  //   return "ca";
  // else if(buf_.front()=='t')
  //   return "ta";
  // else if(buf_.front()=='a'&&buf_.size()!=1)
  //   return "at";
  // else 
  //   return "a"; 
=======
  // Your code here.
  return {};
>>>>>>> upstream/check1-startercode
}

void Reader::pop( uint64_t len )
{
<<<<<<< HEAD
  buf_.erase(0,len);
  total_r_ += len;
=======
  // Your code here.
  (void)len;
>>>>>>> upstream/check1-startercode
}

uint64_t Reader::bytes_buffered() const
{
<<<<<<< HEAD
  return buf_.size();
=======
  // Your code here.
  return {};
>>>>>>> upstream/check1-startercode
}
