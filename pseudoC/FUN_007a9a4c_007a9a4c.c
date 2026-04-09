// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9a4c
// Entry Point: 007a9a4c
// Size: 244 bytes
// Signature: undefined FUN_007a9a4c(void)


void FUN_007a9a4c(long param_1,char **param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  CustomShader *this;
  ulong uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = *(ushort *)(param_1 + 0x196);
  uVar8 = (ulong)uVar6;
  if (uVar6 != 0) {
    lVar9 = 0;
    uVar10 = 1;
    bVar3 = true;
    do {
      plVar1 = (long *)(param_1 + 0x178);
      if (uVar6 != 1) {
        plVar1 = (long *)(*(long *)(param_1 + 0x178) + lVar9);
      }
      lVar7 = *plVar1;
      lVar4 = GsMaterial::getCustomShader();
      if (lVar4 != 0) {
        this = (CustomShader *)GsMaterial::getCustomShader();
        uVar5 = CustomShader::getParameterIndex(this,*(uint *)(lVar7 + 0x88),*param_2,&uStack_6c);
        if ((uVar5 & 1) != 0) goto LAB_007a9afc;
      }
      bVar3 = uVar10 < uVar8;
      if (uVar8 == uVar10) goto LAB_007a9afc;
      uVar6 = *(ushort *)(param_1 + 0x196);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while( true );
  }
  bVar3 = false;
LAB_007a9afc:
  *(bool *)(param_2 + 0x20) = bVar3;
  *(undefined4 *)(param_2 + 0x21) = 3;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


