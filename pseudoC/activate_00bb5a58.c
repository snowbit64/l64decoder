// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00bb5a58
// Size: 748 bytes
// Signature: undefined __thiscall activate(Script * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* Script::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void __thiscall
Script::activate(Script *this,IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3
                )

{
  char *pcVar1;
  char *pcVar2;
  Script *pSVar3;
  ulong uVar4;
  Script *pSVar5;
  int iVar6;
  Script SVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  allocator *paVar12;
  long *plVar13;
  uchar *puVar14;
  char *pcVar15;
  basic_string local_98 [4];
  char *local_88;
  undefined8 local_80;
  allocator *local_78;
  char *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  iVar6 = *(int *)(this + 0x18);
  if (iVar6 != 0) goto LAB_00bb5d00;
  *(undefined4 *)(this + 0x18) = 4;
  pSVar5 = this + 0x31;
  if (((byte)this[0x30] & 1) != 0) {
    pSVar5 = *(Script **)(this + 0x40);
  }
  paVar12 = (allocator *)strlen((char *)pSVar5);
  if ((allocator *)0xffffffffffffffef < paVar12) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (paVar12 < (allocator *)0x17) {
    pcVar15 = (char *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)paVar12 << 1));
    if (paVar12 != (allocator *)0x0) goto LAB_00bb5b04;
  }
  else {
    pcVar15 = (char *)operator_new((ulong)(paVar12 + 0x10) & 0xfffffffffffffff0);
    local_80 = (ulong)(paVar12 + 0x10) & 0xfffffffffffffff0 | 1;
    local_78 = paVar12;
    local_70 = pcVar15;
LAB_00bb5b04:
    memcpy(pcVar15,pSVar5,(size_t)paVar12);
  }
  pcVar15[(long)paVar12] = '\0';
  pcVar15 = (char *)((ulong)&local_80 | 1);
  bVar10 = (byte)local_80 & 1;
  paVar12 = (allocator *)(ulong)((byte)local_80 >> 1);
  pcVar2 = pcVar15;
  if ((local_80 & 1) != 0) {
    paVar12 = local_78;
    pcVar2 = local_70;
  }
  do {
    if (paVar12 == (allocator *)0x0) goto LAB_00bb5bd0;
    pcVar1 = pcVar2 + -1 + (long)paVar12;
    paVar12 = paVar12 + -1;
  } while (*pcVar1 != '.');
  if (paVar12 == (allocator *)0xffffffffffffffff) {
LAB_00bb5bd0:
    pcVar2 = pcVar15;
    if (bVar10 != 0) {
      pcVar2 = local_70;
    }
                    /* try { // try from 00bb5bd8 to 00bb5beb has its CatchHandler @ 00bb5d4c */
    plVar13 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar2,0,
                                       false);
    if (plVar13 != (long *)0x0) goto LAB_00bb5bf4;
  }
  else {
                    /* try { // try from 00bb5b58 to 00bb5b6b has its CatchHandler @ 00bb5d44 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_98,(ulong)&local_80,0,paVar12);
                    /* try { // try from 00bb5b6c to 00bb5bab has its CatchHandler @ 00bb5d50 */
    LuauScriptSystem::getCompiledFileExtension();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)local_98);
    pcVar2 = (char *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      pcVar2 = local_88;
    }
    plVar13 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar2,0,
                                       false);
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (plVar13 == (long *)0x0) {
      bVar10 = (byte)local_80 & 1;
      goto LAB_00bb5bd0;
    }
LAB_00bb5bf4:
                    /* try { // try from 00bb5c04 to 00bb5c0b has its CatchHandler @ 00bb5d48 */
    uVar11 = (**(code **)(*plVar13 + 0x48))(plVar13);
                    /* try { // try from 00bb5c20 to 00bb5cc3 has its CatchHandler @ 00bb5d80 */
    puVar14 = (uchar *)operator_new__((long)(((ulong)uVar11 << 0x20) + 0x100000000) >> 0x20);
    (**(code **)(*plVar13 + 0x28))(plVar13,puVar14,uVar11);
    puVar14[(long)((ulong)uVar11 << 0x20) >> 0x20] = '\0';
    LuauScriptSystem::prepareBuffer((uchar *)param_3,(uint)puVar14,(char *)(ulong)uVar11);
    pcVar2 = local_70;
    uVar9 = local_80;
    SVar7 = this[0x48];
    uVar4 = *(ulong *)(this + 0x50);
    pSVar5 = *(Script **)(this + 0x58);
    bVar10 = (**(code **)(*plVar13 + 0x18))(plVar13);
    if (((byte)SVar7 & 1) == 0) {
      pSVar5 = this + 0x49;
      uVar4 = (ulong)((byte)SVar7 >> 1);
    }
    pSVar3 = (Script *)0x0;
    if (uVar4 != 0) {
      pSVar3 = pSVar5;
    }
    if ((uVar9 & 1) != 0) {
      pcVar15 = pcVar2;
    }
    LuauScriptSystem::doBuffer(param_3,puVar14,uVar11,pcVar15,(char *)pSVar3,(bool)(bVar10 & 1));
    *(undefined4 *)(this + 0x18) = 3;
    (**(code **)(*plVar13 + 8))(plVar13);
    operator_delete__(puVar14);
    this[0x20] = (Script)0x0;
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  iVar6 = *(int *)(this + 0x18);
LAB_00bb5d00:
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6 == 3);
  }
  return;
}


