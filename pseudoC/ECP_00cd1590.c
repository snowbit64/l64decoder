// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ECP
// Entry Point: 00cd1590
// Size: 572 bytes
// Signature: undefined __thiscall ECP(ECP * this, ECP * param_1, bool param_2)


/* CryptoPP::ECP::ECP(CryptoPP::ECP const&, bool) */

void __thiscall CryptoPP::ECP::ECP(ECP *this,ECP *param_1,bool param_2)

{
  Integer *this_00;
  Integer *this_01;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  this_00 = (Integer *)(this + 0x18);
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ECP_01005df8;
  *(undefined ***)(this + 8) = &PTR__ECP_01005eb8;
                    /* try { // try from 00cd15e4 to 00cd15eb has its CatchHandler @ 00cd1820 */
  Integer::Integer(this_00);
  this_01 = (Integer *)(this + 0x48);
                    /* try { // try from 00cd15f0 to 00cd15f7 has its CatchHandler @ 00cd1818 */
  Integer::Integer(this_01);
  *(undefined ***)(this + 0x78) = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cd1610 to 00cd1617 has its CatchHandler @ 00cd1810 */
  Integer::Integer((Integer *)(this + 0x80));
                    /* try { // try from 00cd161c to 00cd1623 has its CatchHandler @ 00cd1800 */
  Integer::Integer((Integer *)(this + 0xb0));
  this[0xe0] = (ECP)0x1;
                    /* try { // try from 00cd163c to 00cd165b has its CatchHandler @ 00cd1828 */
  if ((param_2) && (uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 200))(), (uVar2 & 1) == 0)) {
    plVar3 = (long *)operator_new(0xf8);
                    /* try { // try from 00cd16c4 to 00cd16c7 has its CatchHandler @ 00cd17f0 */
    MontgomeryRepresentation::MontgomeryRepresentation
              ((MontgomeryRepresentation *)plVar3,(Integer *)(*(long *)(param_1 + 0x10) + 0x18));
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    lVar4 = *plVar3;
    *(long **)(this + 0x10) = plVar3;
                    /* try { // try from 00cd16ec to 00cd16f7 has its CatchHandler @ 00cd17ec */
    (**(code **)(lVar4 + 0xd0))(local_98,plVar3,param_1 + 0x18);
                    /* try { // try from 00cd16f8 to 00cd1703 has its CatchHandler @ 00cd17dc */
    Integer::operator=(this_00,(Integer *)local_98);
    uVar2 = local_88;
    if (uStack_80 <= local_88) {
      uVar2 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_78 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd173c to 00cd173f has its CatchHandler @ 00cd17d8 */
    UnalignedDeallocate(local_78);
                    /* try { // try from 00cd1750 to 00cd1757 has its CatchHandler @ 00cd17d4 */
    (**(code **)(**(long **)(this + 0x10) + 0xd0))(local_98,*(long **)(this + 0x10),param_1 + 0x48);
                    /* try { // try from 00cd1758 to 00cd1763 has its CatchHandler @ 00cd17d0 */
    Integer::operator=(this_01,(Integer *)local_98);
    local_98[0] = &PTR__Integer_0100c890;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd1794 to 00cd1797 has its CatchHandler @ 00cd17cc */
    UnalignedDeallocate(local_78);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x10);
    plVar5 = *(long **)(this + 0x10);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))();
    }
    *(long **)(this + 0x10) = plVar3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
                    /* try { // try from 00cd1678 to 00cd16b7 has its CatchHandler @ 00cd1828 */
    Integer::operator=(this_00,(Integer *)(param_1 + 0x18));
    Integer::operator=(this_01,(Integer *)(param_1 + 0x48));
    Integer::operator=((Integer *)(this + 0x80),(Integer *)(param_1 + 0x80));
    Integer::operator=((Integer *)(this + 0xb0),(Integer *)(param_1 + 0xb0));
    this[0xe0] = param_1[0xe0];
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


