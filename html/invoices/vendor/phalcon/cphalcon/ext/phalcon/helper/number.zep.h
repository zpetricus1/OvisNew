
extern zend_class_entry *phalcon_helper_number_ce;

ZEPHIR_INIT_CLASS(Phalcon_Helper_Number);

PHP_METHOD(Phalcon_Helper_Number, between);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_helper_number_between, 0, 3, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_helper_number_between, 0, 3, _IS_BOOL, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, value)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, from)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, to)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_helper_number_method_entry) {
	PHP_ME(Phalcon_Helper_Number, between, arginfo_phalcon_helper_number_between, ZEND_ACC_FINAL|ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
