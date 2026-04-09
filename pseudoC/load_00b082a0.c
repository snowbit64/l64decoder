// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00b082a0
// Size: 624 bytes
// Signature: undefined __cdecl load(char * param_1, AudioBufferDesc * param_2, bool param_3)


/* AudioLoaderOGG::load(char const*, AudioBufferDesc&, bool) */

bool AudioLoaderOGG::load(char *param_1,AudioBufferDesc *param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  void *__s;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  double dVar12;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined **local_438;
  undefined8 uStack_430;
  long *local_428;
  undefined auStack_41c [4];
  undefined auStack_418 [944];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_438 = &PTR__VorbisFileWrap_00fe7268;
  uStack_430 = 0;
  plVar5 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  local_428 = plVar5;
  if (plVar5 == (long *)0x0) {
    bVar2 = false;
    goto LAB_00b084d8;
  }
                    /* try { // try from 00b08314 to 00b08317 has its CatchHandler @ 00b08518 */
  uVar6 = (**(code **)(*plVar5 + 0x10))();
  if ((uVar6 & 1) == 0) {
    bVar2 = false;
  }
  else {
    memset(auStack_418,0,0x3b0);
    uStack_458 = DAT_021157c8;
    local_460 = s_ovCallbacks;
    uStack_448 = DAT_021157d8;
    uStack_450 = DAT_021157d0;
                    /* try { // try from 00b08348 to 00b0835f has its CatchHandler @ 00b08528 */
    iVar3 = (*fn_ov_open_callbacks)(&local_438,auStack_418,0,0,&local_460);
    bVar2 = iVar3 == 0;
    if (iVar3 == 0) {
                    /* try { // try from 00b08398 to 00b083a3 has its CatchHandler @ 00b08510 */
      lVar7 = (*fn_ov_info)(auStack_418,0xffffffff);
      iVar3 = *(int *)(lVar7 + 8);
      param_2[4] = (AudioBufferDesc)0x0;
      *(int *)(param_2 + 8) = iVar3;
      iVar9 = *(int *)(lVar7 + 4);
      if (iVar9 == 1) {
        uVar8 = 2;
        uVar10 = 1;
LAB_00b083dc:
        *(undefined4 *)param_2 = uVar8;
        *(undefined4 *)(param_2 + 0xc) = uVar10;
      }
      else if (iVar9 == 2) {
        uVar10 = 2;
        uVar8 = 3;
        goto LAB_00b083dc;
      }
                    /* try { // try from 00b083e4 to 00b0840f has its CatchHandler @ 00b08514 */
      dVar12 = (double)ov_time_total(auStack_418,0xffffffff);
      uVar11 = iVar3 * iVar9 * (int)(dVar12 + 1.0) * 2;
      __s = operator_new__((ulong)uVar11);
      *(void **)(param_2 + 0x40) = __s;
      memset(__s,0,(ulong)uVar11);
      if ((int)uVar11 < 0) {
        iVar3 = *(int *)(lVar7 + 4);
        iVar9 = *(int *)(lVar7 + 8);
                    /* try { // try from 00b0842c to 00b08437 has its CatchHandler @ 00b08514 */
        dVar12 = (double)ov_time_total(auStack_418,0xffffffff);
        uVar11 = iVar3 * iVar9 * (int)(dVar12 + 1.0) * 2;
      }
      iVar3 = 0;
      do {
        iVar9 = iVar3;
        if (uVar11 - iVar9 == 0 || (int)uVar11 < iVar9) break;
                    /* try { // try from 00b08470 to 00b08487 has its CatchHandler @ 00b0852c */
        iVar4 = (*fn_ov_read)(auStack_418,(long)__s + (long)iVar9,uVar11 - iVar9,0,2,1,auStack_41c);
        iVar3 = iVar9 + iVar4;
      } while (0 < iVar4);
      *(int *)(param_2 + 0x48) = iVar9;
    }
    if (param_3) {
                    /* try { // try from 00b0849c to 00b084b7 has its CatchHandler @ 00b08528 */
      AudioUtil::mergeToSingleChannel(param_2);
    }
    (*fn_ov_clear)(auStack_418);
    local_438 = &PTR__VorbisFileWrap_00fe7268;
    plVar5 = local_428;
    if (local_428 == (long *)0x0) goto LAB_00b084d8;
  }
  local_438 = &PTR__VorbisFileWrap_00fe7268;
  (**(code **)(*plVar5 + 8))(plVar5);
LAB_00b084d8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


