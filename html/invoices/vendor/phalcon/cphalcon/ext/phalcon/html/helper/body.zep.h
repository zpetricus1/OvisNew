
extern zend_class_entry *phalcon_html_helper_body_ce;

ZEPHIR_INIT_CLASS(Phalcon_Html_Helper_Body);

PHP_METHOD(Phalcon_Html_Helper_Body, __invoke);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_html_helper_body___invoke, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_html_helper_body___invoke, 0, 0, IS_STRING, NULL, 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, attributes, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_html_helper_body_method_entry) {
	PHP_ME(Phalcon_Html_Helper_Body, __invoke, arginfo_phalcon_html_helper_body___invoke, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
