// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put
// Entry Point: 00ccdf64
// Size: 1380 bytes
// Signature: undefined __thiscall Put(EncodedObjectFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::EncodedObjectFilter::Put(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::EncodedObjectFilter::Put(EncodedObjectFilter *this,uchar *param_1,ulong param_2)

{
  ulong *puVar1;
  EncodedObjectFilter EVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  BufferedTransformation *pBVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  bool local_d8 [4];
  uchar local_d4 [4];
  long *local_d0;
  byte local_c8;
  undefined7 uStack_c7;
  undefined uStack_c0;
  undefined7 uStack_bf;
  undefined uStack_b8;
  undefined uStack_b7;
  undefined6 uStack_b6;
  undefined **local_b0;
  undefined **ppuStack_a8;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x9c) == *(int *)(this + 0x98)) {
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1,param_2,0,1);
  }
  else {
    plVar4 = (long *)(this + 0x30);
    local_d0 = plVar4;
    ByteQueue::LazyPut((ByteQueue *)plVar4,param_1,param_2);
    puVar1 = (ulong *)(this + 0x90);
LAB_00cce03c:
    do {
      do {
                    /* try { // try from 00cce03c to 00cce0cb has its CatchHandler @ 00cce520 */
        uVar5 = ByteQueue::IsEmpty();
        if ((uVar5 & 1) != 0) goto LAB_00cce360;
        iVar11 = *(int *)(this + 0x2c);
        if (iVar11 == 0) {
          lVar7 = ByteQueue::Get((ByteQueue *)plVar4,(uchar *)(this + 0xa8));
          if (lVar7 == 0) goto LAB_00cce360;
          if (((byte)this[0xa4] & 1) == 0) {
            uVar6 = TheBitBucket();
          }
          else {
            uVar6 = (**(code **)(*(long *)this + 0x160))(this);
          }
          local_b0 = (undefined **)0x1;
          (**(code **)(*plVar4 + 0x118))(plVar4,uVar6,&local_b0,&DEFAULT_CHANNEL,1);
          *(undefined4 *)(this + 0x2c) = 1;
LAB_00cce0d0:
                    /* try { // try from 00cce0e0 to 00cce107 has its CatchHandler @ 00cce514 */
          if ((((*(int *)(this + 0xa0) == 0) || (this[0xa8] != (EncodedObjectFilter)0x0)) ||
              (lVar7 = ByteQueue::Peek((ByteQueue *)plVar4,local_d4), lVar7 == 0)) ||
             (local_d4[0] != '\0')) {
                    /* try { // try from 00cce10c to 00cce143 has its CatchHandler @ 00cce518 */
            Algorithm::Algorithm((Algorithm *)&local_b0,false);
            local_b0 = &PTR__BufferedTransformation_0100f4c8;
            ppuStack_a8 = &PTR__Walker_0100f658;
            local_70 = 0;
            uStack_88 = 0;
            local_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            local_98 = plVar4;
            BufferedTransformation::Initialize((NameValuePairs *)&local_b0,0x211f5e0);
            local_d8[0] = false;
                    /* try { // try from 00cce148 to 00cce1a7 has its CatchHandler @ 00cce51c */
            uVar5 = BERLengthDecode((BufferedTransformation *)&local_b0,puVar1,local_d8);
            if ((uVar5 & 1) == 0) goto LAB_00cce360;
            if (((byte)this[0xa4] & 1) == 0) {
              uVar6 = TheBitBucket();
            }
            else {
              uVar6 = (**(code **)(*(long *)this + 0x160))(this);
            }
            local_c8 = (byte)uStack_88;
            uStack_c7 = (undefined7)((ulong)uStack_88 >> 8);
            (**(code **)(*plVar4 + 0x118))(plVar4,uVar6,&local_c8,&DEFAULT_CHANNEL,1);
            EVar2 = this[0xa8];
            if ((((byte)EVar2 >> 5 & 1) == 0) && (local_d8[0] == false)) {
              puVar10 = (undefined8 *)__cxa_allocate_exception(0x28);
              uStack_b7 = 0;
              local_c8 = 0x20;
              uStack_bf = 0x6f727265206564;
              uStack_b8 = 0x72;
              uStack_c7 = 0x63656420524542;
              uStack_c0 = 0x6f;
              *(undefined4 *)(puVar10 + 1) = 1;
              *puVar10 = &PTR__Exception_00fe0298;
                    /* try { // try from 00cce3e0 to 00cce3e7 has its CatchHandler @ 00cce4e8 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)(puVar10 + 2));
              *puVar10 = &PTR__Exception_00fe9ee0;
              if ((local_c8 & 1) != 0) {
                operator_delete((void *)CONCAT62(uStack_b6,CONCAT11(uStack_b7,uStack_b8)));
              }
              *puVar10 = &PTR__Exception_01002700;
                    /* try { // try from 00cce418 to 00cce42f has its CatchHandler @ 00cce510 */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar10,&BERDecodeErr::typeinfo,Exception::~Exception);
            }
            if (local_d8[0] != false) {
              *(undefined4 *)(this + 0x2c) = 2;
              EVar2 = this[0xa4];
              goto joined_r0x00cce1c8;
            }
            if (((byte)EVar2 >> 5 & 1) == 0) {
              puVar10 = (undefined8 *)__cxa_allocate_exception(0x28);
              uStack_b7 = 0;
              local_c8 = 0x20;
              uStack_bf = 0x6f727265206564;
              uStack_b8 = 0x72;
              uStack_c7 = 0x63656420524542;
              uStack_c0 = 0x6f;
              *(undefined4 *)(puVar10 + 1) = 1;
              *puVar10 = &PTR__Exception_00fe0298;
                    /* try { // try from 00cce474 to 00cce47b has its CatchHandler @ 00cce4e4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)(puVar10 + 2));
              *puVar10 = &PTR__Exception_00fe9ee0;
              if ((local_c8 & 1) != 0) {
                operator_delete((void *)CONCAT62(uStack_b6,CONCAT11(uStack_b7,uStack_b8)));
              }
              *puVar10 = &PTR__Exception_01002700;
                    /* try { // try from 00cce4ac to 00cce4c3 has its CatchHandler @ 00cce510 */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar10,&BERDecodeErr::typeinfo,Exception::~Exception);
            }
            iVar11 = *(int *)(this + 0xa0) + 1;
          }
          else {
            if (((byte)this[0xa4] & 1) == 0) {
              uVar6 = TheBitBucket();
            }
            else {
                    /* try { // try from 00cce248 to 00cce273 has its CatchHandler @ 00cce514 */
              uVar6 = (**(code **)(*(long *)this + 0x160))(this);
            }
            local_b0 = (undefined **)0x1;
            (**(code **)(*plVar4 + 0x118))(plVar4,uVar6,&local_b0,&DEFAULT_CHANNEL,1);
            iVar11 = *(int *)(this + 0xa0) + -1;
          }
          uVar5 = 0;
          *(int *)(this + 0xa0) = iVar11;
LAB_00cce284:
          *(undefined4 *)(this + 0x2c) = 0;
          uVar12 = (uint)uVar5 | *(uint *)(this + 0xa0);
        }
        else {
          if (iVar11 == 1) goto LAB_00cce0d0;
          if (iVar11 != 2) goto LAB_00cce03c;
          EVar2 = this[0xa4];
joined_r0x00cce1c8:
          if (((byte)EVar2 & 1) == 0) {
            uVar6 = TheBitBucket();
          }
          else {
                    /* try { // try from 00cce1d4 to 00cce203 has its CatchHandler @ 00cce520 */
            uVar6 = (**(code **)(*(long *)this + 0x160))(this);
          }
          local_b0 = (undefined **)*puVar1;
          (**(code **)(*plVar4 + 0x118))(plVar4,uVar6,&local_b0,&DEFAULT_CHANNEL,1);
          uVar5 = *puVar1 - (long)local_b0;
          *puVar1 = uVar5;
          if (uVar5 == 0) goto LAB_00cce284;
          uVar12 = *(uint *)(this + 0x2c) | *(uint *)(this + 0xa0);
        }
      } while (uVar12 != 0);
      iVar11 = *(int *)(this + 0x9c) + 1;
      *(int *)(this + 0x9c) = iVar11;
      if (((byte)this[0xa4] >> 1 & 1) != 0) {
                    /* try { // try from 00cce2b0 to 00cce2d3 has its CatchHandler @ 00cce520 */
        plVar8 = (long *)(**(code **)(*(long *)this + 0x160))(this);
        (**(code **)(*plVar8 + 0x38))(plVar8,0,0,0xffffffff,1);
        iVar11 = *(int *)(this + 0x9c);
      }
    } while (iVar11 != *(int *)(this + 0x98));
    uVar12 = *(uint *)(this + 0xa4);
    if ((uVar12 >> 2 & 1) != 0) {
                    /* try { // try from 00cce2e8 to 00cce35f has its CatchHandler @ 00cce4c8 */
      plVar8 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      (**(code **)(*plVar8 + 0x38))(plVar8,0,0,0xffffffff,1);
      uVar12 = *(uint *)(this + 0xa4);
    }
    if ((uVar12 >> 3 & 1) != 0) {
      plVar8 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      (**(code **)(*plVar8 + 0x80))(plVar8,0xffffffff,1);
    }
    pBVar9 = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))(this);
    BufferedTransformation::TransferAllTo2
              ((BufferedTransformation *)plVar4,pBVar9,(basic_string *)&DEFAULT_CHANNEL,true);
LAB_00cce360:
                    /* try { // try from 00cce360 to 00cce367 has its CatchHandler @ 00cce4cc */
    ByteQueue::FinalizeLazyPut();
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


