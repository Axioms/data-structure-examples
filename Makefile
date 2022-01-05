.PHONY: clean All

All:
	@echo "----------Building project:[ Lab_11 - Debug ]----------"
	@cd "Lab_11" && "$(MAKE)" -f  "Lab_11.mk"
clean:
	@echo "----------Cleaning project:[ Lab_11 - Debug ]----------"
	@cd "Lab_11" && "$(MAKE)" -f  "Lab_11.mk" clean
