// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Resource
// Entry Point: 00b2aef8
// Size: 144 bytes
// Signature: undefined __thiscall Resource(Resource * this, char * param_1, uint param_2)


/* Resource::Resource(char const*, unsigned int) */

void __thiscall Resource::Resource(Resource *this,char *param_1,uint param_2)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
                    /* try { // try from 00b2af30 to 00b2af37 has its CatchHandler @ 00b2afa8 */
  Streamable::Streamable((Streamable *)(this + 0x10));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x20] = (Resource)0x0;
  *(uint *)(this + 0x24) = param_2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Resource_00fe92e8;
  *(undefined ***)(this + 0x10) = &PTR__Resource_00fe9320;
                    /* try { // try from 00b2af68 to 00b2af73 has its CatchHandler @ 00b2af88 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x30));
  return;
}


