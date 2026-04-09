// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftleaf
// Entry Point: 00e434f4
// Size: 464 bytes
// Signature: undefined __cdecl cftleaf(int param_1, int param_2, float * param_3)


/* fftimpl::cftleaf(int, int, float*) */

void fftimpl::cftleaf(int param_1,int param_2,float *param_3)

{
  if (param_1 == 0x200) {
    cftmdl1(0x80,param_3);
    cftf161(param_3);
    cftf162(param_3 + 0x20);
    cftf161(param_3 + 0x40);
    cftf161(param_3 + 0x60);
    cftmdl2(0x80,param_3 + 0x80);
    cftf161(param_3 + 0x80);
    cftf162(param_3 + 0xa0);
    cftf161(param_3 + 0xc0);
    cftf162(param_3 + 0xe0);
    cftmdl1(0x80,param_3 + 0x100);
    cftf161(param_3 + 0x100);
    cftf162(param_3 + 0x120);
    cftf161(param_3 + 0x140);
    cftf161(param_3 + 0x160);
    if (param_2 == 0) {
      cftmdl2(0x80,param_3 + 0x180);
      cftf162(param_3 + 0x1e0);
    }
    else {
      cftmdl1(0x80,param_3 + 0x180);
      cftf161(param_3 + 0x1e0);
    }
    cftf161(param_3 + 0x180);
    cftf162(param_3 + 0x1a0);
    cftf161(param_3 + 0x1c0);
    return;
  }
  cftmdl1(0x40,param_3);
  cftf081(param_3);
  cftf082(param_3 + 0x10);
  cftf081(param_3 + 0x20);
  cftf081(param_3 + 0x30);
  cftmdl2(0x40,param_3 + 0x40);
  cftf081(param_3 + 0x40);
  cftf082(param_3 + 0x50);
  cftf081(param_3 + 0x60);
  cftf082(param_3 + 0x70);
  cftmdl1(0x40,param_3 + 0x80);
  cftf081(param_3 + 0x80);
  cftf082(param_3 + 0x90);
  cftf081(param_3 + 0xa0);
  cftf081(param_3 + 0xb0);
  if (param_2 == 0) {
    cftmdl2(0x40,param_3 + 0xc0);
    cftf082(param_3 + 0xf0);
  }
  else {
    cftmdl1(0x40,param_3 + 0xc0);
    cftf081(param_3 + 0xf0);
  }
  cftf081(param_3 + 0xc0);
  cftf082(param_3 + 0xd0);
  cftf081(param_3 + 0xe0);
  return;
}


