// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canonicalToWorld
// Entry Point: 00b20dd0
// Size: 72 bytes
// Signature: undefined __thiscall canonicalToWorld(AndroidInputDevice * this, int param_1, float * param_2, float * param_3)


/* AndroidInputDevice::canonicalToWorld(int, float const*, float*) */

void __thiscall
AndroidInputDevice::canonicalToWorld
          (AndroidInputDevice *this,int param_1,float *param_2,float *param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  
  lVar1 = (long)param_1 * 4;
  cVar2 = (&DAT_004c48f1)[lVar1];
  cVar3 = (&DAT_004c48f3)[lVar1];
  *param_3 = param_2[(char)(&DAT_004c48f2)[lVar1]] * (float)(int)(char)(&DAT_004c48f0)[lVar1];
  param_3[1] = param_2[cVar3] * (float)(int)cVar2;
  param_3[2] = param_2[2];
  return;
}


