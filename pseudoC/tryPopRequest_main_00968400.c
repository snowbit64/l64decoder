// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryPopRequest_main
// Entry Point: 00968400
// Size: 672 bytes
// Signature: undefined __thiscall tryPopRequest_main(DowngradePipeline * this, ChangeRequest * param_1, float param_2)


/* TextureStreamingManager::DowngradePipeline::tryPopRequest_main(TextureStreamingManager::ChangeRequest&,
   float) */

void __thiscall
TextureStreamingManager::DowngradePipeline::tryPopRequest_main
          (DowngradePipeline *this,ChangeRequest *param_1,float param_2)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulonglong *puVar10;
  ulonglong unaff_x22;
  ulonglong *puVar11;
  int iVar12;
  ulonglong **ppuVar13;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  lVar4 = Watch::getCurrentTicks();
LAB_00968468:
  lVar9 = *(long *)this;
  Mutex::enterCriticalSection();
  uVar1 = *(uint *)(lVar9 + 0xb0);
                    /* try { // try from 0096847c to 00968483 has its CatchHandler @ 009686ac */
  Mutex::leaveCriticalSection();
  if (uVar1 < 10) {
    Mutex::enterCriticalSection();
    uVar7 = *(ulong *)(this + 0x80);
    lVar9 = *(long *)(this + 0x68);
    lVar8 = *(long *)(this + 0x70);
    ppuVar13 = (ulonglong **)(lVar9 + (uVar7 / 0xaa) * 8);
    if (lVar8 == lVar9) {
      puVar11 = (ulonglong *)0x0;
    }
    else {
      puVar11 = *ppuVar13 + (uVar7 % 0xaa) * 3;
    }
    do {
      if (lVar8 == lVar9) {
        puVar10 = (ulonglong *)0x0;
        if (puVar11 == (ulonglong *)0x0) goto LAB_00968554;
      }
      else {
        puVar10 = (ulonglong *)
                  (*(long *)(lVar9 + ((uVar7 + *(long *)(this + 0x88)) / 0xaa) * 8) +
                  ((uVar7 + *(long *)(this + 0x88)) % 0xaa) * 0x18);
        if (puVar11 == puVar10) {
LAB_00968554:
          iVar12 = 3;
          goto LAB_00968588;
        }
      }
                    /* try { // try from 00968528 to 0096852b has its CatchHandler @ 009686b0 */
      dVar3 = (double)Watch::convertTicksToMs(lVar4 - puVar11[2]);
      if (param_2 <= (float)dVar3) goto LAB_0096855c;
      puVar11 = puVar11 + 3;
      if ((long)puVar11 - (long)*ppuVar13 == 0xff0) {
        ppuVar13 = ppuVar13 + 1;
        puVar11 = *ppuVar13;
      }
      lVar9 = *(long *)(this + 0x68);
      lVar8 = *(long *)(this + 0x70);
      uVar7 = *(ulong *)(this + 0x80);
    } while( true );
  }
  goto LAB_00968610;
LAB_0096855c:
  local_a0 = *(undefined4 *)(puVar11 + 1);
  local_9c = *(undefined4 *)((long)puVar11 + 0xc);
  unaff_x22 = *puVar11;
  local_a8 = puVar11[2];
                    /* try { // try from 00968574 to 00968583 has its CatchHandler @ 009686a4 */
  std::__ndk1::
  deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::erase((int)this + 0x60);
  iVar12 = 0;
LAB_00968588:
                    /* try { // try from 00968588 to 0096858f has its CatchHandler @ 009686a8 */
  Mutex::leaveCriticalSection();
  if (puVar11 != puVar10) {
    uVar7 = CommonPipelineData::tryChangeTextureStatus_any
                      (*(CommonPipelineData **)this,unaff_x22,3,4);
    if ((uVar7 & 1) != 0) {
      lVar4 = *(long *)this;
      Mutex::enterCriticalSection();
      *(int *)(lVar4 + 0xb0) = *(int *)(lVar4 + 0xb0) + 1;
                    /* try { // try from 0096863c to 00968643 has its CatchHandler @ 009686a0 */
      Mutex::leaveCriticalSection();
      uVar5 = 1;
      *(ulonglong *)param_1 = unaff_x22;
      *(undefined4 *)(param_1 + 8) = local_a0;
      *(undefined4 *)(param_1 + 0xc) = local_9c;
      *(ulonglong *)(param_1 + 0x10) = local_a8;
      goto LAB_00968664;
    }
    logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",unaff_x22);
    DAT_0210ee54 = DAT_0210ee54 + -1;
    DAT_0210ee5c = DAT_0210ee5c + 1;
    FUN_00f27700(local_9c,this + 0x1a0);
    DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
    FUN_00f27700(0xffffffff,this + 0x1a4);
    iVar12 = 0;
  }
  if (iVar12 != 0) {
    if (iVar12 == 3) {
LAB_00968610:
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
LAB_00968664:
    if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    return;
  }
  goto LAB_00968468;
}


