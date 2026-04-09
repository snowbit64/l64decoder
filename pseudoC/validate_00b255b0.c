// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validate
// Entry Point: 00b255b0
// Size: 160 bytes
// Signature: undefined __thiscall validate(DomXMLFile * this, char * param_1, uint param_2, basic_string * param_3, int * param_4)


/* DomXMLFile::validate(char const*, unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

bool __thiscall
DomXMLFile::validate(DomXMLFile *this,char *param_1,uint param_2,basic_string *param_3,int *param_4)

{
  int iVar1;
  long *this_00;
  
  this_00 = (long *)operator_new(0x308);
                    /* try { // try from 00b255e0 to 00b255eb has its CatchHandler @ 00b25650 */
  tinyxml2::XMLDocument::XMLDocument((XMLDocument *)this_00,true,0);
  tinyxml2::XMLDocument::Parse((XMLDocument *)this_00,param_1,(ulong)param_2);
  iVar1 = *(int *)((long)this_00 + 0x6c);
  if (iVar1 != 0) {
    tinyxml2::XMLDocument::ErrorStr();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_3);
    *param_4 = *(int *)(this_00 + 0x12);
  }
  (**(code **)(*this_00 + 0x80))(this_00);
  return iVar1 == 0;
}


