// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadSoundDescs
// Entry Point: 0074b9c4
// Size: 532 bytes
// Signature: undefined __cdecl loadSoundDescs(vector * param_1, DomXMLFile * param_2, basic_string * param_3)


/* CollisionEffectManager::loadSoundDescs(std::__ndk1::vector<CollisionEffectManager::EffectModel::SoundDesc,
   std::__ndk1::allocator<CollisionEffectManager::EffectModel::SoundDesc> >&, DomXMLFile&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

byte CollisionEffectManager::loadSoundDescs
               (vector *param_1,DomXMLFile *param_2,basic_string *param_3)

{
  long lVar1;
  void *pvVar2;
  bool bVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar7 = *(char **)(param_3 + 4);
  if ((*(byte *)param_3 & 1) == 0) {
    pcVar7 = (char *)((long)param_3 + 1);
  }
  uVar4 = DomXMLFile::getNumElements(param_2,pcVar7);
  uVar10 = (ulong)uVar4;
  lVar8 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  uVar9 = lVar8 * -0x5555555555555555;
  if (uVar10 <= uVar9) {
    if (uVar10 <= uVar9 && uVar9 - uVar10 != 0) {
      *(ulong *)(param_1 + 8) = *(long *)param_1 + uVar10 * 0x18;
    }
  }
  else {
    std::__ndk1::
    vector<CollisionEffectManager::EffectModel::SoundDesc,std::__ndk1::allocator<CollisionEffectManager::EffectModel::SoundDesc>>
    ::__append((vector<CollisionEffectManager::EffectModel::SoundDesc,std::__ndk1::allocator<CollisionEffectManager::EffectModel::SoundDesc>>
                *)param_1,uVar10 + lVar8 * 0x5555555555555555);
  }
  if (uVar4 == 0) {
    bVar3 = false;
  }
  else {
    uVar4 = 0;
    lVar8 = 0;
    uVar9 = 1;
    bVar3 = true;
    do {
      FUN_006cadd8(local_b8,param_3,&DAT_0050332d);
                    /* try { // try from 0074ba98 to 0074baa3 has its CatchHandler @ 0074bc0c */
      std::__ndk1::to_string(uVar4);
      pvVar2 = (void *)((ulong)local_d0 | 1);
      if ((local_d0[0] & 1) != 0) {
        pvVar2 = local_c0;
      }
                    /* try { // try from 0074babc to 0074bac3 has its CatchHandler @ 0074bc30 */
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)local_b8,(ulong)pvVar2);
      local_90 = (void *)puVar5[2];
      uStack_98 = puVar5[1];
      local_a0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 0074badc to 0074baeb has its CatchHandler @ 0074bbd8 */
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)&local_a0);
      local_70 = (void *)puVar5[2];
      uStack_78 = puVar5[1];
      local_80 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
                    /* try { // try from 0074bb2c to 0074bb37 has its CatchHandler @ 0074bc1c */
      uVar6 = loadSoundDesc((SoundDesc *)(*(long *)param_1 + lVar8),param_2,
                            (basic_string *)&local_80);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if ((uVar6 & 1) == 0) break;
      bVar3 = uVar9 < uVar10;
      lVar8 = lVar8 + 0x18;
      uVar4 = uVar4 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar10 * 0x18 - lVar8 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar3 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


