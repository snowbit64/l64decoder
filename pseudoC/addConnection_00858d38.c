// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConnection
// Entry Point: 00858d38
// Size: 224 bytes
// Signature: undefined __thiscall addConnection(DensityMapSyncer * this, uint param_1)


/* DensityMapSyncer::addConnection(unsigned int) */

void __thiscall DensityMapSyncer::addConnection(DensityMapSyncer *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ConnectionData *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_58;
  ConnectionData *pCStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar6 = 0;
  iVar4 = (int)((ulong)(*(long *)(this + 0x48) - *(long *)(this + 0x40)) >> 4);
  iVar5 = iVar4 + -1;
  if (0 < iVar4) {
    do {
      while( true ) {
        iVar4 = iVar6 + iVar5;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        uVar1 = iVar4 >> 1;
        uVar2 = *(uint *)(*(long *)(this + 0x40) +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
        if (uVar2 < param_1) break;
        if (uVar2 <= param_1) goto LAB_00858dec;
        iVar5 = uVar1 - 1;
        if (iVar5 < iVar6) goto LAB_00858dbc;
      }
      iVar6 = uVar1 + 1;
    } while (iVar6 <= iVar5);
  }
LAB_00858dbc:
  this_00 = (ConnectionData *)operator_new(0x1498);
                    /* try { // try from 00858dcc to 00858dcf has its CatchHandler @ 00858e18 */
  ConnectionData::ConnectionData(this_00,(vector *)(this + 0x28));
  local_58 = (ulong)param_1;
  pCStack_50 = this_00;
  std::__ndk1::
  vector<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>>>
  ::insert((vector<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>>>
            *)(this + 0x40),(int)*(undefined8 *)(this + 0x40) + iVar6 * 0x10,(pair *)&local_58);
LAB_00858dec:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


