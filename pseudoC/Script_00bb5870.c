// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Script
// Entry Point: 00bb5870
// Size: 96 bytes
// Signature: undefined __thiscall Script(Script * this, char * param_1, uint param_2, ScriptDesc * param_3)


/* Script::Script(char const*, unsigned int, Script::ScriptDesc*) */

void __thiscall Script::Script(Script *this,char *param_1,uint param_2,ScriptDesc *param_3)

{
  Resource::Resource((Resource *)this,param_1,param_2);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__Script_00feb4f8;
  *(undefined ***)(this + 0x10) = &PTR__Script_00feb538;
  if (param_3 != (ScriptDesc *)0x0) {
                    /* try { // try from 00bb58b8 to 00bb58bf has its CatchHandler @ 00bb58d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x48),(basic_string *)(param_3 + 8));
  }
  return;
}


