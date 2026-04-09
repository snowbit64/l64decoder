// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TheoraVideoDecoder
// Entry Point: 00c70ec0
// Size: 920 bytes
// Signature: undefined __thiscall TheoraVideoDecoder(TheoraVideoDecoder * this, File * param_1)


/* TheoraVideoDecoder::TheoraVideoDecoder(File*) */

void __thiscall TheoraVideoDecoder::TheoraVideoDecoder(TheoraVideoDecoder *this,File *param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  Thread *pTVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined local_470 [1024];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  *(File **)this = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(TheoraVideoDecoder **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 00c70f0c to 00c70f17 has its CatchHandler @ 00c71280 */
  Semaphore::Semaphore((Semaphore *)(this + 0x60),0);
                    /* try { // try from 00c70f20 to 00c70f2b has its CatchHandler @ 00c71270 */
  Semaphore::Semaphore((Semaphore *)(this + 0x78),0);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(TheoraVideoDecoder **)(this + 0xa0) = this + 0x90;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(TheoraVideoDecoder **)(this + 0xc0) = this + 0xb0;
  *(undefined8 *)(this + 200) = 0;
  plVar13 = (long *)(this + 0xd0);
  *plVar13 = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(long **)(this + 0xe0) = plVar13;
  *(undefined8 *)(this + 0xe8) = 0;
  this[0xf0] = (TheoraVideoDecoder)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined2 *)(this + 0x50) = 0;
                    /* try { // try from 00c70fa4 to 00c70fcb has its CatchHandler @ 00c7128c */
  iVar4 = (**(code **)(**(long **)this + 0x28))(*(long **)this,local_470,0x400);
  if (iVar4 != 0x400) goto LAB_00c71220;
  (**(code **)(**(long **)this + 0x38))(*(long **)this,0);
  iVar4 = 0;
  do {
                    /* try { // try from 00c71008 to 00c7102f has its CatchHandler @ 00c712ac */
    pvVar6 = operator_new(0x10010);
    iVar5 = (**(code **)(**(long **)this + 0x28))(*(long **)this,pvVar6,0x10000);
    if (iVar5 < 0) {
      operator_delete(pvVar6);
    }
    else {
      *(int *)((long)pvVar6 + 0x10000) = iVar5;
      do {
        lVar12 = *plVar13;
        *(long *)((long)pvVar6 + 0x10008) = lVar12;
        lVar7 = FUN_00f275d0(lVar12,pvVar6,plVar13);
      } while (lVar12 != lVar7);
      FUN_00f27700(1,this + 0xd8);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  lVar7 = 0;
  do {
    if ((*(uint *)(local_470 + lVar7) ^ 0x65687480 | *(uint *)(local_470 + lVar7 + 3) ^ 0x61726f65)
        == 0) {
                    /* try { // try from 00c710b0 to 00c710c7 has its CatchHandler @ 00c7126c */
      ogg_sync_init(this + 8);
      readHeaders();
      findStreams();
      break;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x3f8);
  uVar9 = *(ulong *)(this + 0x40);
  lVar7 = *(long *)(this + 0x48);
  bVar3 = uVar9 != 0;
  this[0xf0] = (TheoraVideoDecoder)(bVar3 && lVar7 != 0);
  if (lVar7 == 0) {
    iVar4 = 0;
    iVar5 = 0;
    *(undefined4 *)(this + 0xf4) = 0;
    *(undefined4 *)(this + 0xf8) = 0;
    if (uVar9 != 0) goto LAB_00c710f8;
LAB_00c71130:
    iVar4 = 0;
    iVar10 = 1;
    uVar14 = 0;
    uVar11 = 0x1e;
  }
  else {
    iVar4 = *(int *)(lVar7 + 0x218);
    iVar5 = *(int *)(lVar7 + 0x214);
    *(int *)(this + 0xf4) = iVar4;
    *(int *)(this + 0xf8) = iVar5;
    if (uVar9 == 0) goto LAB_00c71130;
LAB_00c710f8:
    iVar10 = *(int *)(uVar9 + 0x1c0);
    uVar11 = *(uint *)(uVar9 + 0x1bc);
    uVar14 = *(undefined8 *)(uVar9 + 0x1ac);
    uVar1 = 0;
    if (uVar11 != 0) {
      uVar1 = (uint)(iVar10 * iVar4) / uVar11;
    }
    iVar4 = uVar1 * iVar5 * 4;
    uVar9 = (ulong)(uVar1 * iVar5 * 8);
  }
  *(int *)(this + 0xfc) = iVar4;
  *(int *)(this + 0x100) = (int)uVar9;
  *(undefined8 *)(this + 0x104) = uVar14;
  *(uint *)(this + 0x10c) = uVar11;
  *(int *)(this + 0x110) = iVar10;
  *(undefined8 *)(this + 0x114) = 0;
  if (bVar3 && lVar7 != 0) {
                    /* try { // try from 00c7115c to 00c71163 has its CatchHandler @ 00c712a0 */
    pTVar8 = (Thread *)operator_new(0x48);
                    /* try { // try from 00c71168 to 00c7116b has its CatchHandler @ 00c7125c */
    Thread::Thread(pTVar8);
    *(Thread **)(this + 0x70) = pTVar8;
                    /* try { // try from 00c71170 to 00c7119f has its CatchHandler @ 00c712a0 */
    Thread::start(pTVar8,staticStreamerThread,this,0xffffffff,"Theora streamer thread",2,0x4000);
    pTVar8 = (Thread *)operator_new(0x48);
                    /* try { // try from 00c711a4 to 00c711a7 has its CatchHandler @ 00c71258 */
    Thread::Thread(pTVar8);
    *(Thread **)(this + 0x58) = pTVar8;
                    /* try { // try from 00c711ac to 00c711f3 has its CatchHandler @ 00c712a0 */
    Thread::start(pTVar8,staticDecoderThread,this,0xffffffff,"Theora decoder thread",2,0x20000);
    Semaphore::post();
    Semaphore::post();
    Semaphore::post();
    Semaphore::post();
    while (*(int *)(this + 0xb8) != 4) {
                    /* try { // try from 00c71200 to 00c71207 has its CatchHandler @ 00c712a8 */
      ThreadUtil::usleep(1000);
    }
    while (*(int *)(this + 0x98) != 2) {
                    /* try { // try from 00c7120c to 00c71213 has its CatchHandler @ 00c712a4 */
      ThreadUtil::usleep(1000);
    }
  }
LAB_00c71220:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


