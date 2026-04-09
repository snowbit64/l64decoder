// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ZIPFileArchive
// Entry Point: 00b36e88
// Size: 152 bytes
// Signature: undefined __thiscall ZIPFileArchive(ZIPFileArchive * this, File * param_1, bool param_2, bool param_3)


/* ZIPFileArchive::ZIPFileArchive(File*, bool, bool) */

void __thiscall
ZIPFileArchive::ZIPFileArchive(ZIPFileArchive *this,File *param_1,bool param_2,bool param_3)

{
  *(undefined ***)this = &PTR__ZIPFileArchive_00fe99d8;
  NativeFile::NativeFile((NativeFile *)(this + 0x18));
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x80c8) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x80c0) = 0;
  *(ZIPFileArchive **)(this + 0x80b8) = this + 0x80c0;
  this[8] = (ZIPFileArchive)param_2;
  *(File **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x80d8) = 0;
                    /* try { // try from 00b36efc to 00b36f07 has its CatchHandler @ 00b36f20 */
  init(this,param_3);
  return;
}


