// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StringSource
// Entry Point: 00c9c33c
// Size: 388 bytes
// Signature: undefined __thiscall StringSource(StringSource * this, char * param_1, bool param_2, BufferedTransformation * param_3)


/* CryptoPP::StringSource::StringSource(char const*, bool, CryptoPP::BufferedTransformation*) */

void __thiscall
CryptoPP::StringSource::StringSource
          (StringSource *this,char *param_1,bool param_2,BufferedTransformation *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined uVar3;
  char local_98 [8];
  char *local_90;
  undefined8 uStack_88;
  ulong local_78;
  ulong local_70;
  void *local_68;
  undefined **local_60;
  long *local_58;
  long local_48;
  
  uVar3 = SUB81(param_3,0);
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Filter::Filter((Filter *)this,(BufferedTransformation *)0x0);
  *(undefined ***)this = &PTR__Filter_01008830;
  *(undefined ***)(this + 8) = &PTR__Source_010089f8;
                    /* try { // try from 00c9c38c to 00c9c397 has its CatchHandler @ 00c9c4e8 */
  Filter::Detach((Filter *)this,param_3);
  *(undefined ***)this = &PTR__SourceTemplate_01002998;
  *(undefined ***)(this + 8) = &PTR__SourceTemplate_01002b60;
                    /* try { // try from 00c9c3b0 to 00c9c3b7 has its CatchHandler @ 00c9c4e4 */
  StringStore::StringStore((StringStore *)(this + 0x30),(char *)0x0);
  local_98[0] = '\0';
  local_90 = (char *)0x0;
  uStack_88 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__SourceTemplate_01002770;
  *(undefined ***)(this + 8) = &PTR__StringSource_01002938;
  if (param_1 == (char *)0x0) {
    uStack_88 = 0;
  }
  else {
                    /* try { // try from 00c9c3e4 to 00c9c3ef has its CatchHandler @ 00c9c4c4 */
    uStack_88 = __strlen_chk(param_1,0xffffffffffffffff);
  }
  local_98[0] = '\0';
                    /* try { // try from 00c9c400 to 00c9c417 has its CatchHandler @ 00c9c4dc */
  local_90 = param_1;
  MakeParameters<CryptoPP::ConstByteArrayParameter>
            ((CryptoPP *)"InputBuffer",local_98,(ConstByteArrayParameter *)0x1,(bool)uVar3);
                    /* try { // try from 00c9c420 to 00c9c443 has its CatchHandler @ 00c9c4fc */
  (**(code **)(*(long *)this + 0x58))(this,&local_60);
  if (param_2) {
    (**(code **)(*(long *)this + 0x1a8))(this,1);
  }
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00c9c464 to 00c9c467 has its CatchHandler @ 00c9c4c0 */
    (**(code **)(*local_58 + 8))();
  }
  uVar2 = local_78;
  if (local_70 <= local_78) {
    uVar2 = local_70;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_68 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00c9c490 to 00c9c493 has its CatchHandler @ 00c9c4d8 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


