// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PK_MessageAccumulatorBase
// Entry Point: 00cc13d8
// Size: 124 bytes
// Signature: undefined __thiscall PK_MessageAccumulatorBase(PK_MessageAccumulatorBase * this)


/* CryptoPP::PK_MessageAccumulatorBase::PK_MessageAccumulatorBase() */

void __thiscall
CryptoPP::PK_MessageAccumulatorBase::PK_MessageAccumulatorBase(PK_MessageAccumulatorBase *this)

{
  Algorithm::Algorithm((Algorithm *)this,true);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__PK_MessageAccumulatorBase_01004170;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
                    /* try { // try from 00cc142c to 00cc1433 has its CatchHandler @ 00cc1468 */
  Integer::Integer((Integer *)(this + 0x88));
                    /* try { // try from 00cc1438 to 00cc143b has its CatchHandler @ 00cc1454 */
  Integer::Integer((Integer *)(this + 0xb8));
  this[0xe8] = (PK_MessageAccumulatorBase)0x1;
  return;
}


