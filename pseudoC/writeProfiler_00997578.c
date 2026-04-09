// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeProfiler
// Entry Point: 00997578
// Size: 724 bytes
// Signature: undefined __thiscall writeProfiler(Bt2PhysicsStats * this, CProfileIterator * param_1, int param_2, float param_3)


/* Bt2PhysicsStats::writeProfiler(CProfileIterator*, int, float) */

void __thiscall
Bt2PhysicsStats::writeProfiler
          (Bt2PhysicsStats *this,CProfileIterator *param_1,int param_2,float param_3)

{
  Bt2PhysicsStats *pBVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined auStack_a8 [32];
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar8 = (float)CProfileManager::Get_Time_Since_Reset();
  CProfileIterator::First();
  uVar3 = CProfileIterator::Is_Done();
  fVar10 = 0.0;
  iVar7 = 0;
  while ((uVar3 & 1) == 0) {
    iVar7 = iVar7 + 1;
    fVar10 = fVar10 + *(float *)(*(long *)(param_1 + 8) + 0xc);
    CProfileIterator::Next();
    uVar3 = CProfileIterator::Is_Done();
  }
  lVar5 = *(long *)param_1;
  if (*(long *)(lVar5 + 0x20) == 0) {
    uVar6 = 1;
    fVar9 = fVar8;
  }
  else {
    uVar6 = *(undefined4 *)(lVar5 + 8);
    fVar9 = *(float *)(lVar5 + 0xc);
  }
  pBVar1 = this + 0x70;
  iVar4 = param_2;
  if (0 < param_2) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)pBVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pBVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pBVar1);
  FUN_009974d4(auStack_a8,0x20,&DAT_004f1ea9,uVar6);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0x88));
  if (param_3 == 0.0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)((fVar9 * 100.0) / param_3 + 0.5);
  }
  FUN_009974d4(auStack_a8,0x20,&DAT_004f1ea9,iVar4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0xa0));
  if (fVar8 == 0.0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)((fVar9 * 100.0) / fVar8 + 0.5);
  }
  FUN_009974d4(auStack_a8,0x20,&DAT_004f1ea9,iVar4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0xb8));
  if (fVar9 == 0.0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(((fVar9 - fVar10) * 100.0) / fVar9 + 0.5);
  }
  FUN_009974d4(auStack_a8,0x20,&DAT_004f1ea9,iVar4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0xd0));
  FUN_009974d4(auStack_a8,0x20,&DAT_004f1ea9,(int)((fVar9 - fVar10) * 1000.0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0x100));
  FUN_009974d4(auStack_a8,0x20,&DAT_004f1ea9,(int)(fVar9 * 1000.0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)(this + 0xe8));
  if (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    do {
      CProfileIterator::Enter_Child(param_1,iVar7);
      writeProfiler(this,param_1,param_2 + 1,fVar9);
      CProfileIterator::Enter_Parent();
      iVar7 = iVar7 + -1;
    } while (iVar7 != -1);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


