// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encrypt
// Entry Point: 00bbe09c
// Size: 312 bytes
// Signature: undefined __thiscall encrypt(AESCipher * this, uchar * param_1, int param_2, uchar * param_3)


/* AESCipher::encrypt(unsigned char const*, int, unsigned char*) */

void __thiscall AESCipher::encrypt(AESCipher *this,uchar *param_1,int param_2,uchar *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char local_6c;
  char acStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = 0;
  if ((param_1 != (uchar *)0x0) && (0 < param_2)) {
    (**(code **)(**(long **)(this + 0x38) + 0x60))(*(long **)(this + 0x38),this + 0x28,0xffffffff);
    if (0xf < (uint)param_2) {
      uVar6 = ((uint)param_2 >> 4) + 1;
      do {
        (**(code **)(**(long **)(this + 0x38) + 200))(*(long **)(this + 0x38),param_3,param_1,0x10);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    uVar6 = param_2 + ((uint)param_2 >> 4) * -0x10;
    uVar3 = (ulong)uVar6;
    local_6c = '\x10' - (char)uVar6;
    iVar4 = uVar6 - 0x10;
    if ((int)uVar6 < 0x10) {
      uVar3 = (ulong)(int)uVar6;
      pcVar5 = acStack_68 + uVar3;
      do {
        bVar2 = iVar4 != -1;
        iVar4 = iVar4 + 1;
        *pcVar5 = local_6c;
        pcVar5 = pcVar5 + 1;
      } while (bVar2);
    }
    __memcpy_chk(acStack_68,param_1,uVar3,0x10);
    (**(code **)(**(long **)(this + 0x38) + 200))(*(long **)(this + 0x38),param_3,acStack_68,0x10);
    uVar6 = param_2 + 0x10U & 0xfffffff0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


