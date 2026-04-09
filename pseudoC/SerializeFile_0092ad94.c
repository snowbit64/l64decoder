// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SerializeFile
// Entry Point: 0092ad94
// Size: 168 bytes
// Signature: undefined __thiscall SerializeFile(SerializeFile * this, Texture * param_1, uint param_2, COLOR_PROFILE param_3, bool param_4)


/* SceneSave::SerializeFile::SerializeFile(Texture*, unsigned int,
   SceneSave::SerializeFile::COLOR_PROFILE, bool) */

void __thiscall
SceneSave::SerializeFile::SerializeFile
          (SerializeFile *this,Texture *param_1,uint param_2,COLOR_PROFILE param_3,bool param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = *(ushort *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x30) = 0;
  if ((uint)(param_3 != 1) == (uVar1 & 2) >> 1) {
    uVar2 = 1;
    if ((uVar1 & 2) == 0) {
      uVar2 = 2;
    }
    *(undefined4 *)(this + 0x30) = uVar2;
  }
                    /* try { // try from 0092ae04 to 0092ae0b has its CatchHandler @ 0092ae3c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  *(Texture **)(this + 0x28) = param_1;
  this[0x35] = (SerializeFile)0x0;
  this[0x34] = (SerializeFile)param_4;
  *(uint *)this = param_2;
  *(undefined4 *)(this + 4) = 1;
  return;
}


