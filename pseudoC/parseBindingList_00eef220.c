// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseBindingList
// Entry Point: 00eef220
// Size: 756 bytes
// Signature: undefined __cdecl parseBindingList(TempVector * param_1, bool param_2)


/* Luau::Parser::parseBindingList(Luau::TempVector<Luau::Parser::Binding>&, bool) */

void Luau::Parser::parseBindingList(TempVector *param_1,bool param_2)

{
  TempVector TVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TempVector<Luau::Parser::Binding> *this;
  uint in_w2;
  undefined *in_x8;
  int iVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  this = (TempVector<Luau::Parser::Binding> *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar5 = *(int *)(param_1 + 0x28);
  if ((iVar5 != 0x106) || ((in_w2 & 1) == 0)) {
    if ((in_w2 & 1) == 0) {
      if (iVar5 == 0x117) {
        uStack_68 = *(undefined8 *)(param_1 + 0x34);
        local_70 = *(undefined8 *)(param_1 + 0x2c);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        nextLexeme();
        TVar1 = *param_1;
      }
      else {
        reportNameError((Parser *)param_1,"variable name");
        uStack_68 = *(undefined8 *)(param_1 + 0x34);
        local_70 = *(undefined8 *)(param_1 + 0x2c);
        uVar3 = *(undefined8 *)(param_1 + 0xd0);
        TVar1 = *param_1;
      }
      local_78 = 0;
      if ((TVar1 != (TempVector)0x0) && (local_78 = 0, *(int *)(param_1 + 0x28) == 0x3a)) {
        nextLexeme();
        local_78 = parseTypeAnnotation();
      }
      uStack_80 = uStack_68;
      uStack_88 = local_70;
      local_90 = uVar3;
      TempVector<Luau::Parser::Binding>::push_back(this,(Binding *)&local_90);
      if (*(int *)(param_1 + 0x28) == 0x2c) {
        do {
          nextLexeme();
          if (*(int *)(param_1 + 0x28) == 0x117) {
            uStack_68 = *(undefined8 *)(param_1 + 0x34);
            local_70 = *(undefined8 *)(param_1 + 0x2c);
            uVar3 = *(undefined8 *)(param_1 + 0x40);
            nextLexeme();
            TVar1 = *param_1;
          }
          else {
            reportNameError((Parser *)param_1,"variable name");
            uStack_68 = *(undefined8 *)(param_1 + 0x34);
            local_70 = *(undefined8 *)(param_1 + 0x2c);
            uVar3 = *(undefined8 *)(param_1 + 0xd0);
            TVar1 = *param_1;
          }
          uVar4 = 0;
          if ((TVar1 != (TempVector)0x0) && (uVar4 = 0, *(int *)(param_1 + 0x28) == 0x3a)) {
            nextLexeme();
            uVar4 = parseTypeAnnotation();
          }
          uStack_80 = uStack_68;
          uStack_88 = local_70;
          local_90 = uVar3;
          local_78 = uVar4;
          TempVector<Luau::Parser::Binding>::push_back(this,(Binding *)&local_90);
        } while (*(int *)(param_1 + 0x28) == 0x2c);
      }
LAB_00eef4f0:
      *in_x8 = 0;
      *(undefined8 *)(in_x8 + 0xc) = 0;
      *(undefined8 *)(in_x8 + 4) = 0;
      *(undefined8 *)(in_x8 + 0x18) = 0;
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00eef510;
    }
    do {
      if (iVar5 == 0x117) {
        uStack_68 = *(undefined8 *)(param_1 + 0x34);
        local_70 = *(undefined8 *)(param_1 + 0x2c);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        nextLexeme();
        TVar1 = *param_1;
      }
      else {
        reportNameError((Parser *)param_1,"variable name");
        uStack_68 = *(undefined8 *)(param_1 + 0x34);
        local_70 = *(undefined8 *)(param_1 + 0x2c);
        uVar3 = *(undefined8 *)(param_1 + 0xd0);
        TVar1 = *param_1;
      }
      uVar4 = 0;
      if ((TVar1 != (TempVector)0x0) && (uVar4 = 0, *(int *)(param_1 + 0x28) == 0x3a)) {
        nextLexeme();
        uVar4 = parseTypeAnnotation();
      }
      uStack_80 = uStack_68;
      uStack_88 = local_70;
      local_90 = uVar3;
      local_78 = uVar4;
      TempVector<Luau::Parser::Binding>::push_back(this,(Binding *)&local_90);
      if (*(int *)(param_1 + 0x28) != 0x2c) goto LAB_00eef4f0;
      nextLexeme();
      iVar5 = *(int *)(param_1 + 0x28);
    } while (iVar5 != 0x106);
  }
  uStack_88 = *(undefined8 *)(param_1 + 0x34);
  local_90 = *(undefined8 *)(param_1 + 0x2c);
  nextLexeme();
  if (*(int *)(param_1 + 0x28) == 0x3a) {
    nextLexeme();
    uVar3 = parseVariadicArgumentAnnotation();
  }
  else {
    uVar3 = 0;
  }
  *(undefined8 *)(in_x8 + 0x18) = uVar3;
  *in_x8 = 1;
  *(undefined8 *)(in_x8 + 0xc) = uStack_88;
  *(undefined8 *)(in_x8 + 4) = local_90;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00eef510:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


