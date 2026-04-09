// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroups
// Entry Point: 00a4ac44
// Size: 76 bytes
// Signature: undefined __cdecl setGroups(map * param_1, uint param_2)


/* AudioSource::setGroups(std::__ndk1::map<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > > const&, unsigned int) */

void AudioSource::setGroups(map *param_1,uint param_2)

{
  if ((undefined8 *)param_1 != &s_groups) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,void*>*,long>>
              ((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)&s_groups,(__tree_const_iterator)*(undefined8 *)param_1,(int)param_1 + 8);
  }
  s_defaultGroup = param_2;
  return;
}


