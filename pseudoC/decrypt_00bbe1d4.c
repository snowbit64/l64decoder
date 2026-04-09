// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decrypt
// Entry Point: 00bbe1d4
// Size: 352 bytes
// Signature: undefined __thiscall decrypt(AESCipher * this, uchar * param_1, int param_2, uchar * param_3)


/* AESCipher::decrypt(unsigned char const*, int, unsigned char*) */

void __thiscall AESCipher::decrypt(AESCipher *this,uchar *param_1,int param_2,uchar *param_3)

{
  long lVar1;
  int iVar2;
  ulong __n;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 local_58;
  undefined7 uStack_50;
  byte bStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = 0;
  if ((param_1 != (uchar *)0x0) && (0 < param_2)) {
    if ((param_2 & 0xfU) == 0) {
      (**(code **)(**(long **)(this + 0x40) + 0x60))(*(long **)(this + 0x40),this + 0x28,0xffffffff)
      ;
      if (0x1f < (uint)param_2) {
        uVar6 = ((uint)param_2 >> 4) + 1;
        puVar5 = (undefined8 *)param_3;
        do {
          (**(code **)(**(long **)(this + 0x40) + 200))
                    (*(long **)(this + 0x40),&local_58,param_1,0x10);
          param_1 = param_1 + 0x10;
          uVar6 = uVar6 - 1;
          param_3 = (uchar *)(puVar5 + 2);
          puVar5[1] = CONCAT17(bStack_49,uStack_50);
          *puVar5 = local_58;
          puVar5 = (undefined8 *)param_3;
        } while (2 < uVar6);
      }
      (**(code **)(**(long **)(this + 0x40) + 200))(*(long **)(this + 0x40),&local_58,param_1,0x10);
      if (0xffffffef < bStack_49 - 0x11) {
        uVar6 = 0x10 - bStack_49;
        __n = (ulong)uVar6;
        if ((int)uVar6 < 0x10) {
          uVar6 = 0xf;
        }
        pbVar3 = (byte *)((long)&local_48 - (ulong)bStack_49);
        lVar4 = (ulong)(uVar6 + 1) + (ulong)bStack_49 + -0x10;
        do {
          if ((uint)*pbVar3 != (uint)bStack_49) goto LAB_00bbe2b0;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        memcpy(param_3,&local_58,__n);
        iVar2 = (param_2 & 0xfffffff0U) - (uint)bStack_49;
        goto LAB_00bbe2b4;
      }
    }
LAB_00bbe2b0:
    iVar2 = -1;
  }
LAB_00bbe2b4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


