// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveAsObj
// Entry Point: 00ec268c
// Size: 348 bytes
// Signature: undefined __thiscall saveAsObj(MyVertexIndex * this, char * param_1, uint param_2, uint * param_3)


/* FLOAT_MATH::MyVertexIndex::saveAsObj(char const*, unsigned int, unsigned int*) */

bool __thiscall
FLOAT_MATH::MyVertexIndex::saveAsObj(MyVertexIndex *this,char *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  FILE *__stream;
  float *pfVar2;
  double *pdVar3;
  
  __stream = fopen(param_1,"wb");
  if (__stream != (FILE *)0x0) {
    iVar1 = (**(code **)(*(long *)this + 0x30))(this);
    if (((byte)this[8] & 1) == 0) {
      pfVar2 = (float *)(**(code **)(*(long *)this + 0x10))(this);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        fprintf(__stream,"v %0.9f %0.9f %0.9f\r\n",(double)*pfVar2,(double)pfVar2[1],
                (double)pfVar2[2]);
        pfVar2 = pfVar2 + 3;
      }
    }
    else {
      pdVar3 = (double *)(**(code **)(*(long *)this + 0x18))(this);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        fprintf(__stream,"v %0.9f %0.9f %0.9f\r\n",(double)(float)*pdVar3,(double)(float)pdVar3[1],
                (double)(float)pdVar3[2]);
        pdVar3 = pdVar3 + 3;
      }
    }
    if (param_2 != 0) {
      do {
        fprintf(__stream,"f %d %d %d\r\n",(ulong)(*param_3 + 1),(ulong)(param_3[1] + 1),
                (ulong)(param_3[2] + 1));
        param_2 = param_2 - 1;
        param_3 = param_3 + 3;
      } while (param_2 != 0);
    }
    fclose(__stream);
  }
  return __stream != (FILE *)0x0;
}


