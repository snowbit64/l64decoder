// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006df8c4
// Size: 1012 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, uint param_2)


/* FileManagerStats::render(SharedRenderArgs const&, unsigned int) */

void FileManagerStats::render(SharedRenderArgs *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  pair pVar7;
  undefined8 uVar8;
  long lVar10;
  FontOverlayRenderer *this;
  uint uVar11;
  undefined8 local_b0 [2];
  undefined8 *local_a0;
  long local_98;
  long lStack_90;
  undefined local_88;
  ulonglong *local_78;
  char local_70;
  FontOverlayRenderer *local_68;
  float local_60;
  long local_58;
  ulong uVar9;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  this = *(FontOverlayRenderer **)((ulong)param_2 + 8);
  FontOverlayRenderer::setBold(this,false);
  FontOverlayRenderer::setColor(this,1.0,1.0,1.0,1.0);
  local_60 = 0.94;
  local_68 = this;
  uVar8 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  Printer::printLine((char *)&local_68,uVar8);
  FileManager::getFileHistory();
                    /* try { // try from 006df958 to 006df99f has its CatchHandler @ 006dfcdc */
  local_b0[0] = ThreadUtil::getCurrentThreadId();
  local_a0 = local_b0;
  pVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long&&>,std::__ndk1::tuple<>>
                    (local_78,(piecewise_construct_t *)local_b0,(tuple *)&DAT_00516c38,
                     (tuple *)&local_a0);
  uVar9 = (ulong)pVar7;
  local_98 = uVar9 + 0x28;
  lStack_90 = uVar9 + 0x50;
  local_88 = 0;
  Mutex::enterCriticalSection();
  local_60 = local_60 + -0.016;
                    /* try { // try from 006df9bc to 006df9d3 has its CatchHandler @ 006dfcd0 */
  Printer::printLine((char *)&local_68,"Mainthread history: (last %u over %u)",10,
                     *(undefined8 *)(uVar9 + 0xce0));
  uVar3 = *(uint *)(uVar9 + 0xcd0);
  uVar11 = uVar3;
  if ((int)uVar3 < 0xb) {
    uVar11 = 10;
  }
  uVar11 = uVar11 - 10;
  local_60 = local_60 + -0.016;
  if (uVar11 < uVar3) {
    do {
      uVar4 = *(uint *)(uVar9 + 0xcd8);
      uVar1 = uVar11 + *(int *)(uVar9 + 0xcd4);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar1 / uVar4;
      }
      lVar10 = uVar9 + (ulong)(uVar1 - uVar5 * uVar4) * 0x20;
      lVar2 = lVar10 + 0x51;
      if ((*(byte *)(lVar10 + 0x50) & 1) != 0) {
        lVar2 = *(long *)(lVar10 + 0x60);
      }
                    /* try { // try from 006dfa48 to 006dfa53 has its CatchHandler @ 006dfcf4 */
      Printer::printLine((char *)&local_68,"    File: \'%s\' Access: %s",lVar2,
                         *(undefined8 *)
                          (render(SharedRenderArgs_const&,unsigned_int)::accessLabels +
                          (ulong)*(uint *)(lVar10 + 0x68) * 8));
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
                    /* try { // try from 006dfa60 to 006dfa67 has its CatchHandler @ 006dfccc */
  Mutex::leaveCriticalSection();
                    /* try { // try from 006dfa68 to 006dfab3 has its CatchHandler @ 006dfcd4 */
  lVar10 = I3DStreamingManager::getInstance();
  local_b0[0] = *(undefined8 *)(lVar10 + 0x80);
  local_a0 = local_b0;
  pVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long&&>,std::__ndk1::tuple<>>
                    (local_78,(piecewise_construct_t *)local_b0,(tuple *)&DAT_00516c38,
                     (tuple *)&local_a0);
  uVar9 = (ulong)pVar7;
  local_98 = uVar9 + 0x28;
  lStack_90 = uVar9 + 0x50;
  local_88 = 0;
  Mutex::enterCriticalSection();
  local_60 = local_60 + -0.016;
                    /* try { // try from 006dfad0 to 006dfae7 has its CatchHandler @ 006dfcc8 */
  Printer::printLine((char *)&local_68,"I3D Streaming history: (last %u over %u)",10,
                     *(undefined8 *)(uVar9 + 0xce0));
  uVar3 = *(uint *)(uVar9 + 0xcd0);
  uVar11 = uVar3;
  if ((int)uVar3 < 0xb) {
    uVar11 = 10;
  }
  uVar11 = uVar11 - 10;
  local_60 = local_60 + -0.016;
  if (uVar11 < uVar3) {
    do {
      uVar4 = *(uint *)(uVar9 + 0xcd8);
      uVar1 = uVar11 + *(int *)(uVar9 + 0xcd4);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar1 / uVar4;
      }
      lVar10 = uVar9 + (ulong)(uVar1 - uVar5 * uVar4) * 0x20;
      lVar2 = lVar10 + 0x51;
      if ((*(byte *)(lVar10 + 0x50) & 1) != 0) {
        lVar2 = *(long *)(lVar10 + 0x60);
      }
                    /* try { // try from 006dfb4c to 006dfb57 has its CatchHandler @ 006dfcf0 */
      Printer::printLine((char *)&local_68,"    File: \'%s\'",lVar2);
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
                    /* try { // try from 006dfb64 to 006dfb6b has its CatchHandler @ 006dfcc4 */
  Mutex::leaveCriticalSection();
                    /* try { // try from 006dfb6c to 006dfbb7 has its CatchHandler @ 006dfce4 */
  TextureStreamingManager::getInstance();
  local_b0[0] = TextureStreamingManager::getWorkerThreadId();
  local_a0 = local_b0;
  pVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long&&>,std::__ndk1::tuple<>>
                    (local_78,(piecewise_construct_t *)local_b0,(tuple *)&DAT_00516c38,
                     (tuple *)&local_a0);
  uVar9 = (ulong)pVar7;
  local_98 = uVar9 + 0x28;
  lStack_90 = uVar9 + 0x50;
  local_88 = 0;
  Mutex::enterCriticalSection();
  if (*(int *)(uVar9 + 0xcd0) != 0) {
    local_60 = local_60 + -0.016;
                    /* try { // try from 006dfbdc to 006dfbf3 has its CatchHandler @ 006dfcbc */
    Printer::printLine((char *)&local_68,"Texture Streaming history: (last %u over %u)",10,
                       *(undefined8 *)(uVar9 + 0xce0));
    uVar3 = *(uint *)(uVar9 + 0xcd0);
    uVar11 = uVar3;
    if ((int)uVar3 < 0xb) {
      uVar11 = 10;
    }
    uVar11 = uVar11 - 10;
    local_60 = local_60 + -0.016;
    if (uVar11 < uVar3) {
      do {
        uVar4 = *(uint *)(uVar9 + 0xcd8);
        uVar1 = uVar11 + *(int *)(uVar9 + 0xcd4);
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar1 / uVar4;
        }
        lVar10 = uVar9 + (ulong)(uVar1 - uVar5 * uVar4) * 0x20;
        lVar2 = lVar10 + 0x51;
        if ((*(byte *)(lVar10 + 0x50) & 1) != 0) {
          lVar2 = *(long *)(lVar10 + 0x60);
        }
                    /* try { // try from 006dfc58 to 006dfc63 has its CatchHandler @ 006dfcec */
        Printer::printLine((char *)&local_68,"    File: \'%s\'",lVar2);
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
  }
                    /* try { // try from 006dfc70 to 006dfc77 has its CatchHandler @ 006dfcc0 */
  Mutex::leaveCriticalSection();
  if (local_70 == '\0') {
                    /* try { // try from 006dfc84 to 006dfc87 has its CatchHandler @ 006dfcb8 */
    Mutex::leaveCriticalSection();
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


