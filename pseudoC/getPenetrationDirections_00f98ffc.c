// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPenetrationDirections
// Entry Point: 00f98ffc
// Size: 500 bytes
// Signature: undefined getPenetrationDirections(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btMinkowskiPenetrationDepthSolver::getPenetrationDirections() */

undefined4 * btMinkowskiPenetrationDepthSolver::getPenetrationDirections(void)

{
  int iVar1;
  
  if (((DAT_02125d20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02125d20), iVar1 != 0)) {
    _DAT_02125948 = 0xbf800000;
    _DAT_02125940 = 0x8000000000000000;
    uRam0000000002125958 = 0xbee4f9e4;
    _DAT_02125950 = 0xbf0695ea3f393e60;
    uRam0000000002125968 = 0xbee4f9e4;
    _DAT_02125960 = 0xbf59c422be8d82ba;
    uRam0000000002125978 = 0xbee4f97f;
    _DAT_02125970 = 0x80000000bf64f91a;
    uRam0000000002125988 = 0xbee4fa05;
    _DAT_02125980 = 0x3f59c422be8d82ba;
    uRam0000000002125998 = 0xbee4f9e4;
    _DAT_02125990 = 0x3f0695ea3f393e60;
    uRam00000000021259a8 = 0x3ee4fa05;
    _DAT_021259a0 = 0xbf59c4223e8d82ba;
    uRam00000000021259b8 = 0x3ee4f9e4;
    _DAT_021259b0 = 0xbf0695eabf393e60;
    uRam00000000021259c8 = 0x3ee4f9e4;
    _DAT_021259c0 = 0x3f0695eabf393e60;
    uRam00000000021259d8 = 0x3ee4f9e4;
    _DAT_021259d0 = 0x3f59c4223e8d82ba;
    uRam00000000021259e8 = 0x3ee4f97f;
    _DAT_021259e0 = 0x3f64f91a;
    uRam00000000021259f8 = 0x3f800000;
    _DAT_021259f0 = 0x80000000;
    uRam0000000002125a08 = 0xbf59c476;
    _DAT_02125a00 = 0xbe9e36b13ed9c3f0;
    uRam0000000002125a18 = 0xbf59c476;
    _DAT_02125a10 = 0xbeffff58be265ade;
    uRam0000000002125a28 = 0xbf0696c4;
    _DAT_02125a20 = 0xbf4f1b693e8696c4;
    uRam0000000002125a38 = 0xbf59c476;
    _DAT_02125a30 = 0x3e9e36b13ed9c3f0;
    uRam0000000002125a48 = 0xbf0696a2;
    _DAT_02125a40 = 0x800000003f59c411;
    uRam0000000002125a58 = 0xbf59c454;
    _DAT_02125a50 = 0x80000000bf06963e;
    uRam0000000002125a68 = 0xbf0696a2;
    _DAT_02125a60 = 0xbeffff9bbf302d38;
    uRam0000000002125a78 = 0xbf59c476;
    _DAT_02125a70 = 0x3effff58be265ade;
    uRam0000000002125a88 = 0xbf0696a2;
    _DAT_02125a80 = 0x3effff9bbf302d38;
    uRam0000000002125a98 = 0xbf0696c4;
    _DAT_02125a90 = 0x3f4f1b693e8696c4;
    uRam0000000002125aa8 = 0;
    _DAT_02125aa0 = 0x3e9e36f43f737889;
    uRam0000000002125ab8 = 0;
    _DAT_02125ab0 = 0xbe9e36f43f737889;
    uRam0000000002125ac8 = 0;
    _DAT_02125ac0 = 0xbf4f1bbd3f167925;
    uRam0000000002125ad8 = 0;
    _DAT_02125ad0 = 0xbf80000000000000;
    uRam0000000002125ae8 = 0;
    _DAT_02125ae0 = 0xbf4f1bbdbf167925;
    uRam0000000002125af8 = 0x80000000;
    _DAT_02125af0 = 0xbe9e36f4bf737889;
    uRam0000000002125b08 = 0x80000000;
    _DAT_02125b00 = 0x3e9e36f4bf737889;
    uRam0000000002125b18 = 0x80000000;
    _DAT_02125b10 = 0x3f4f1bbdbf167925;
    uRam0000000002125b28 = 0x80000000;
    _DAT_02125b20 = 0x3f80000080000000;
    uRam0000000002125b38 = 0x80000000;
    _DAT_02125b30 = 0x3f4f1bbd3f167925;
    uRam0000000002125b48 = 0x3f0696a2;
    _DAT_02125b40 = 0xbeffff9b3f302d38;
    uRam0000000002125b58 = 0x3f0696c4;
    _DAT_02125b50 = 0xbf4f1b69be8696c4;
    uRam0000000002125b68 = 0x3f0696a2;
    _DAT_02125b60 = 0xbf59c411;
    uRam0000000002125b78 = 0x3f0696c4;
    _DAT_02125b70 = 0x3f4f1b69be8696c4;
    uRam0000000002125b88 = 0x3f0696a2;
    _DAT_02125b80 = 0x3effff9b3f302d38;
    uRam0000000002125b98 = 0x3f59c454;
    _DAT_02125b90 = 0x3f06963e;
    uRam0000000002125ba8 = 0x3f59c476;
    _DAT_02125ba0 = 0xbeffff583e265ade;
    uRam0000000002125bb8 = 0x3f59c476;
    _DAT_02125bb0 = 0xbe9e36b1bed9c3f0;
    uRam0000000002125bc8 = 0x3f59c476;
    _DAT_02125bc0 = 0x3e9e36b1bed9c3f0;
    uRam0000000002125bd8 = 0x3f59c476;
    _DAT_02125bd0 = 0x3effff583e265ade;
    __cxa_guard_release(&DAT_02125d20);
  }
  return &DAT_02125940;
}


