// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_processCancels_async
// Entry Point: 0096cc10
// Size: 308 bytes
// Signature: undefined upgradePipeline_processCancels_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_processCancels_async() */

void TextureStreamingManager::upgradePipeline_processCancels_async(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  Mutex::enterCriticalSection();
                    /* try { // try from 0096cc5c to 0096cc5f has its CatchHandler @ 0096cd48 */
  std::__ndk1::
  vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>
  ::insert<std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>>
            ((vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>
              *)(in_x0 + 0x5f0),(__wrap_iter)*(undefined8 *)(in_x0 + 0x5f8),
             (__wrap_iter)*(undefined8 *)(in_x0 + 0x5d8),(__wrap_iter)*(undefined8 *)(in_x0 + 0x5e0)
            );
  *(undefined8 *)(in_x0 + 0x5e0) = *(undefined8 *)(in_x0 + 0x5d8);
                    /* try { // try from 0096cc68 to 0096cc6f has its CatchHandler @ 0096cd44 */
  Mutex::leaveCriticalSection();
  lVar4 = *(long *)(in_x0 + 0x5f0);
  lVar5 = *(long *)(in_x0 + 0x5f8);
  if (lVar4 == lVar5) goto LAB_0096cd10;
  DAT_0210ee50 = *(int *)(in_x0 + 0x5a8);
  uVar6 = (lVar5 - lVar4) - 0x18;
  lVar7 = lVar4;
  if (uVar6 < 0x18) {
LAB_0096ccec:
    do {
      lVar1 = lVar7 + 0x18;
      DAT_0210ee50 = DAT_0210ee50 - *(int *)(lVar7 + 4);
      lVar7 = lVar1;
    } while (lVar1 != lVar5);
  }
  else {
    iVar8 = 0;
    uVar6 = uVar6 / 0x18 + 1;
    uVar9 = uVar6 & 0x1ffffffffffffffe;
    piVar10 = (int *)(lVar4 + 0x1c);
    uVar11 = uVar9;
    do {
      uVar11 = uVar11 - 2;
      DAT_0210ee50 = DAT_0210ee50 - piVar10[-6];
      iVar8 = iVar8 - *piVar10;
      piVar10 = piVar10 + 0xc;
    } while (uVar11 != 0);
    DAT_0210ee50 = iVar8 + DAT_0210ee50;
    lVar7 = lVar4 + uVar9 * 0x18;
    if (uVar6 != uVar9) goto LAB_0096ccec;
  }
  *(int *)(in_x0 + 0x5a8) = DAT_0210ee50;
LAB_0096cd10:
  *(long *)(in_x0 + 0x5f8) = lVar4;
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4 != lVar5);
  }
  return;
}


