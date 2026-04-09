// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteBMP
// Entry Point: 008c45b0
// Size: 244 bytes
// Signature: undefined __thiscall WriteBMP(GsMaskedOcclusionCulling * this, char * param_1, uchar * param_2, int param_3, int param_4)


/* GsMaskedOcclusionCulling::WriteBMP(char const*, unsigned char const*, int, int) */

void __thiscall
GsMaskedOcclusionCulling::WriteBMP
          (GsMaskedOcclusionCulling *this,char *param_1,uchar *param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  FILE *__s;
  ulong uVar3;
  undefined2 local_64;
  undefined8 local_62;
  undefined8 local_5a;
  undefined2 local_52;
  undefined2 local_50;
  undefined4 local_4e;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)(uint)param_4;
  local_64 = 0x4d42;
  local_62 = 0;
  local_5a = 0xc0000001a;
  local_52 = (undefined2)param_3;
  local_50 = (undefined2)param_4;
  local_4e = 0x180001;
  __s = fopen(param_1,"wb");
  fwrite(&local_64,1,0x1a,__s);
  if (0 < param_4) {
    iVar2 = param_3 * (param_4 + -1) * 3;
    do {
      fwrite(param_2 + iVar2,1,(long)(param_3 * 3),__s);
      iVar2 = iVar2 + param_3 * -3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  iVar2 = fclose(__s);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


